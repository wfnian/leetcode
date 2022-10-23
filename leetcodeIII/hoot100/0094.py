from logging import root


class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        res = []

        def inorder(root):
            if root:
                res.append(root.val)
                inorder(root.left)
                inorder(root.right)

        inorder(root)
        return res


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


def printt(root):
    if root:
        print(root.val)
        printt(root.left)
        printt(root.right)


root = None
root = create(root=root, arr=[1, 2, -1, 3, -1, -1, 2, -1, 3, -1, -1])
printt(root=root)
print(Solution().inorderTraversal(root))