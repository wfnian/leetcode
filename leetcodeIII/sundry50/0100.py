# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if p is None and q or p and q is None:
            return False
        if not p and not q:
            return True
        if p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(q.right, p.right)
