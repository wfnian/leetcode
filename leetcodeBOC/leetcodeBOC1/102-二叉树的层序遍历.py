from typing import Optional, List


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        que = []
        res = []
        if root:
            que.append(root)
            while que:
                level = []
                n = len(que)
                for _ in range(n):
                    temp = que.pop(0)
                    level.append(temp.val)
                    if temp.left:
                        que.append(temp.left)
                    if temp.right:
                        que.append(temp.right)
                res.append(level)
        return res
