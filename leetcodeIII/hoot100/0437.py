class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def pathSum(self, root, targetSum):
        """
        :type root: TreeNode
        :type targetSum: int
        :rtype: int
        """
        if not targetSum: return 0
        if not root: return 0
        res = 0

        def preorder(root, targetSum):
            count = 0
            if not root: return 0
            if not targetSum: return 0
            if root.val == targetSum: count += 1
            count += preorder(root.left, targetSum - root.val)
            count += preorder(root.right, targetSum - root.val)
            return count

        return preorder(root, targetSum) + self.pathSum(root.left, targetSum) + self.pathSum(root.right, targetSum)
