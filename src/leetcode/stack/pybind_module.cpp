#include "stack.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(stack, m) {
  m.doc() = R"pbdoc(
        algorithm leetcode stack
        -----------------------

        .. currentmodule:: algorithm.leetcode.stack

        .. autosummary::
           :toctree: _generate

           isValid
    )pbdoc";

  m.def("isValid", &isValid);
}
