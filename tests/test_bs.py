from algorithm.leetcode import bs


def test_bs_findMin():
    assert bs.findMin([3, 4, 5, 1, 2]) == 1
    assert bs.findMin([4, 5, 6, 7, 0, 1, 2]) == 0
    assert bs.findMin([11, 13, 15, 17]) == 11
