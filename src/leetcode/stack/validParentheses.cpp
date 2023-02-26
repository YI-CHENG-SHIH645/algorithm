//
// Created by 施奕成 on 2022/12/13.
//
#include "stack.h"

bool isValid(const std::string & s) {
  std::stack<char> stack;
  for(char c : s) {
    if(c == '[' || c == '{' || c == '(') {
      stack.push(c);
    } else {
      if(stack.empty()) return false; // this line is very important!
      if(c == ']' && stack.top() != '[') return false;
      if(c == '}' && stack.top() != '{') return false;
      if(c == ')' && stack.top() != '(') return false;
      stack.pop();
    }
  }
  return stack.empty();
}
