#include "connectivity.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(uf, m) {
  m.doc() = R"pbdoc(
        algorithm leetcode union find
        -----------------------

        .. currentmodule:: algorithm.leetcode.uf

        .. autosummary::
           :toctree: _generate

           maxAreaOfIsland
    )pbdoc";

  m.def("maxAreaOfIsland", &maxAreaOfIsland);
}
