from turtle import left


class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """

        if not root:
            return True

        def isSymm(a, b):
            if not a and not b:
                return True
            if not a or not b:
                return False
            if a.val != b.val:
                return False
            return isSymm(a.left, b.right) and isSymm(a.right, b.left)

        return isSymm(root.left, root.right)


def create(root, arr):
    if not arr:
        return root
    if arr[0] != -1:
        root = TreeNode(arr[0])
        arr.pop(0)
        root.left = create(root.left, arr)
        root.right = create(root.right, arr)
        return root
    else:
        arr.pop(0)
        root = None


def print_tree(root):
    if root:
        print(root.val, end=' ')
        print_tree(root.left)
        print_tree(root.right)


root = None
root = create(root, [1, 2, -1, 3, -1, -1, 2, -1, 3, -1, -1])
print_tree(root)
