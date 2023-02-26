#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "stack.h"

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace py = pybind11;

PYBIND11_MODULE(stack, m) {
    m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: algorithm.leetcode.stack

        .. autosummary::
           :toctree: _generate

           isValid
    )pbdoc";

    m.def("isValid", &isValid);

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}
