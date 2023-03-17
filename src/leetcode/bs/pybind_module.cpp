//
// Created by 施奕成 on 2023/3/17.
//
#include "bs.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(bs, m) {
  m.doc() = R"pbdoc(
        algorithm leetcode binary search
        -----------------------

        .. currentmodule:: algorithm.leetcode.bs

        .. autosummary::
           :toctree: _generate

           findMin
           searchInsert
    )pbdoc";
  m.def("findMin", &findMin);
  m.def("searchInsert", &searchInsert);
}
