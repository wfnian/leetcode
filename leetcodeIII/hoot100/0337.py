class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def rob(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.map = dict()

        def dfs(root):
            if not root:
                return 0
            if not root.left and not root.right:
                return root.val
            if root in self.map: return self.map[root]

            #case1:偷父节点
            val1 = root.val
            if root.left:
                val1 += dfs(root.left.left) + dfs(root.left.right)
            if root.right:
                val1 += dfs(root.right.left) + dfs(root.right.right)

            #case2:不偷父节点
            val2 = dfs(root.left) + dfs(root.right)
            self.map[root] = max(val1, val2)
            return max(val1, val2)

        return dfs(root)
