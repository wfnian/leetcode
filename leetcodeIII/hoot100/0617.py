class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def mergeTrees(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: TreeNode
        """
        if not root1 and not root2:
            return None
        if not root1:
            return root1
        if not root2:
            return root2
        res = TreeNode(root1.val + root2.val)
        res.left = self.mergeTrees(root1.left, root2.left)
        res.right = self.mergeTrees(root1.right, root2.right)
