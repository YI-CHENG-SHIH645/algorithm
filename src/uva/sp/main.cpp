//
// Created by 施奕成 on 2023/2/26.
//
#include "sp.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(sp, m) {
  m.doc() = R"pbdoc(
          algorithm uva shortest path
          -----------------------

          .. currentmodule:: algorithm.uva.sp

          .. autosummary::
             :toctree: _generate

             longest_paths
      )pbdoc";

  m.def("longest_paths", &longest_paths);
}
