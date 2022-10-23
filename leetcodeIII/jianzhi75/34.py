# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def pathSum(self, root, target):
        """
        :type root: TreeNode
        :type target: int
        :rtype: List[List[int]]
        """
        self.res = []

        def dfs(root, target, path):
            if not root:
                return []
            path.append(root.val)
            target -= root.val
            if not root.left and not root.right and target == 0:
                self.res.append(path[:])
            dfs(root.left, target, path)
            dfs(root.right, target, path)
            path.pop()

        dfs(root, target, [])
        return self.res
