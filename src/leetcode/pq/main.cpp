#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "pq.h"

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace py = pybind11;

PYBIND11_MODULE(pq, m) {
    m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: algorithm.leetcode.pq

        .. autosummary::
           :toctree: _generate

           kSmallestPairs
           topKFrequent
           KthLargest
    )pbdoc";

    m.def("kSmallestPairs", &kSmallestPairs);

    m.def("topKFrequent", &topKFrequent);

    py::class_<KthLargest>(m, "KthLargest")
            .def(py::init<int, vector<int> &>())
            .def("add", &KthLargest::add);

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}
