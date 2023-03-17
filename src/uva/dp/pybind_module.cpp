#include "dp.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(dp, m) {
  m.doc() = R"pbdoc(
        algorithm uva dynamic programming
        -----------------------

        .. currentmodule:: algorithm.uva.dp

        .. autosummary::
           :toctree: _generate

           cutting_sticks
    )pbdoc";

  m.def("cutting_sticks", &cutting_sticks);
}
