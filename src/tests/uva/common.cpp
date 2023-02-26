//
// Created by 施奕成 on 2023/2/25.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "common.h"

void test_func(void (*func)(), map<string, string>& m) {
  int fildes[2];
  pipe(fildes);
  pid_t pid = fork();

  if(pid < 0) {
    assert(false);
  }
  else if(pid == 0) {
    dup2(fildes[1], STDOUT_FILENO);
    close(fildes[0]);
    close(fildes[1]);
    for(const auto & p : m) {
      cout << p.first << endl << flush;
    }
    exit(0);
  }
  else {
    dup2(fildes[0], STDIN_FILENO);
    close(fildes[0]);
    close(fildes[1]);
    for(const auto & p: m) {
      testing::internal::CaptureStdout();
      func();
      std::string output = testing::internal::GetCapturedStdout();
      EXPECT_THAT(output, testing::HasSubstr(p.second));
    }
  }
}
