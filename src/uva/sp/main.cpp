//
// Created by 施奕成 on 2023/2/26.
//
#include "sp.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace py = pybind11;

PYBIND11_MODULE(sp, m) {
  m.doc() = R"pbdoc(
          Pybind11 example plugin
          -----------------------

          .. currentmodule:: Algorithm.uva.sp

          .. autosummary::
             :toctree: _generate

             longest_paths
      )pbdoc";

  m.def("longest_paths", &longest_paths);

#ifdef VERSION_INFO
  m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
  m.attr("__version__") = "dev";
#endif
}
