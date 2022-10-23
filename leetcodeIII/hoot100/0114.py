class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def flatten(self, root):
        """
        :type root: TreeNode
        :rtype: None Do not return anything, modify root in-place instead.
        """
        L = []

        def preOrder(root, L):

            if root:
                L.append(root)
                preOrder(root.left, L)
                preOrder(root.right, L)

        preOrder(root, L)
        head = node = TreeNode()
        for item in L:
            node.left = None
            node.right = item
            node = item

        return head.right


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
print(Solution().flatten(tree))