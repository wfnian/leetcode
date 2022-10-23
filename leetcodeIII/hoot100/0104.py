class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root:
            return 0
        l = self.maxDepth(root.left)
        r = self.maxDepth(root.right)
        return max(l, r) + 1


def create(root, arr):
    if len(arr) == 0:
        return None
    if arr[0] != -1:
        root = TreeNode(arr[0])
        arr.pop(0)
        root.left = create(root.left, arr)
        root.right = create(root.right, arr)
        return root
    else:
        root = None
        arr.pop(0)


def printt(root):
    if root:
        print(root.val, end=' ')

        printt(root.left)
        printt(root.right)


tree = None
tree = create(tree, [1, 2, -1, -1, 3, -1, -1])
print(Solution().maxDepth(tree))