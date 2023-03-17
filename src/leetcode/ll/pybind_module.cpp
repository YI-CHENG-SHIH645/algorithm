#include "ll.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(ll, m) {
  m.doc() = R"pbdoc(
            algorithm leetcode linked list
            -----------------------

            .. currentmodule:: algorithm.leetcode.ll

            .. autosummary::
               :toctree: _generate

              makeLinkedList
              hasCycle
              detectCycle
              RemoveDuplicateI
              RemoveDuplicateII
              addTwoNumbers
              reverseList
        )pbdoc";

  m.def("makeLinkedList", &makeLinkedList);
  m.def("hasCycle", &hasCycle);
  m.def("detectCycle", &detectCycle);
  m.def("RemoveDuplicateI", &RemoveDuplicateI);
  m.def("RemoveDuplicateII", &RemoveDuplicateII);
  m.def("addTwoNumbers", &addTwoNumbers);
  m.def("reverseList", &reverseList);
}
