class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution(object):
    def isSubStructure(self, A, B):
        """
        :type A: TreeNode
        :type B: TreeNode
        :rtype: bool
        """
        def issame(a, b):
            if not a and not b:
                return True
            if a.val != b.val or (not a and b): return False
            return issame(a.left, b.left) and issame(a.right,b.right)

        if not A or not B:
            return False
        return issame(A,B) or self.isSubStructure(A.left, B) or self.isSubStructure(A.right, B)
