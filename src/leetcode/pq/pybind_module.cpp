#include "pq.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(pq, m) {
  m.doc() = R"pbdoc(
        algorithm leetcode priority queue
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
      .def(py::init<int, std::vector<int> &>())
      .def("add", &KthLargest::add);
}
