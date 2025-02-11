from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        def depth(root: TreeNode) -> int:
            if not root:
                return 0
            return max(depth(root.left), depth(root.right)) + 1

        return depth(root)
