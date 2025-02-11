from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def invert(root: TreeNode) -> Optional[TreeNode]:
            if not root:
                return root
            root.left, root.right = root.right, root.left
            invert(root.left)
            invert(root.right)

        return invert(root)
