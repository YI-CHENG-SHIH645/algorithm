from algorithm.leetcode import tree


def test_tree_levelOrder():
    nodes = [tree.TreeNode(i) for i in [3, 1, 2, 5, 4, 7]]
    for i in range(int(len(nodes)/2)):
        if 2*i+1 < len(nodes):
            nodes[i].left = nodes[2*i+1] or nodes[i].left
        if 2*i+2 < len(nodes):
            nodes[i].right = nodes[2*i+2] or nodes[i].right
    assert tree.levelOrder(nodes[0]) == [[3], [1, 2], [5, 4, 7]]
