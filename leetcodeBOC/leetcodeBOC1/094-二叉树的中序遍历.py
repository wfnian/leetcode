from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []

        def inorder(root):
            if root:
                inorder(root.left)
                res.append(root.val)
                inorder(root.right)
            else:
                return

        inorder(root)
        return res


def create(root: TreeNode, arr: List[int]):
    if not arr:
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
        print(root.val, end="->")
        printt(root.left)
        printt(root.right)


root = None
root = create(root, [1, 2, -1, -1, -1])
printt(root)
