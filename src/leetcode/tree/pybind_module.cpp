//
// Created by 施奕成 on 2023/3/17.
//
#include "tree.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(tree, m) {
  m.doc() = R"pbdoc(
        algorithm leetcode tree
        -----------------------

        .. currentmodule:: algorithm.leetcode.tree

        .. autosummary::
           :toctree: _generate

           hasPathSum
           isValidBST
           levelOrder
           maxDepth
           mergeTrees
           minDepth
           sortedArrayToBST
    )pbdoc";
  m.def("hasPathSum", &hasPathSum);
  m.def("isValidBST", &isValidBST);
  m.def("levelOrder", &levelOrder);
  m.def("maxDepth", &maxDepth);
  m.def("mergeTrees", &mergeTrees);
  m.def("minDepth", &minDepth);
  m.def("sortedArrayToBST", &sortedArrayToBST);
  m.def("zigzagLevelOrder", &zigzagLevelOrder);
}
