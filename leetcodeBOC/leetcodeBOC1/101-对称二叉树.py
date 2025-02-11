from collections import deque
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def isSymm(root: TreeNode, node: TreeNode) -> bool:
            if not root and not node:
                return True
            if not root or not node:
                return False
            if root.val != node.val:
                return False
            return isSymm(root.left, node.right) and isSymm(root.right, node.left)

        return isSymm(root.left, root.right)

        def level(root):
            res = []
            if root:
                que = deque()
                que.append(root)
                while que:
                    n = len(que)
                    row = []
                    for _ in range(n):
                        temp = que.popleft()
                        row.append(temp.val)
                        if temp.left:
                            que.append(temp.left)
                        if temp.right:
                            que.append(temp.right)
                    res.append(row)
                    i, j = 0, len(row) - 1
                    while i < j:
                        if row[i] == row[j]:
                            i += 1
                            j -= 1
                        else:
                            return False
            return True

        return level(root)


print(Solution().isSymmetric())
