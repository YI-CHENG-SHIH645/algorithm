#include "ll.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace py = pybind11;

PYBIND11_MODULE(ll, m) {
  m.doc() = R"pbdoc(
            Pybind11 example plugin
            -----------------------

            .. currentmodule:: Algorithm.leetcode.ll

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

#ifdef VERSION_INFO
  m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
  m.attr("__version__") = "dev";
#endif
}
