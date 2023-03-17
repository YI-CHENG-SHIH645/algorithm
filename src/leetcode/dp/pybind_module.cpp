//
// Created by 施奕成 on 2023/3/17.
//
#include "dp.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(dp, m) {
  m.doc() = R"pbdoc(
        algorithm leetcode dynamic programming
        -----------------------

        .. currentmodule:: algorithm.leetcode.dp

        .. autosummary::
           :toctree: _generate

           lengthOfLIS
           maxSubArray
    )pbdoc";
  m.def("lengthOfLIS", &lengthOfLIS);
  m.def("maxSubArray", &maxSubArray);
  m.def("rob", &rob);
}
