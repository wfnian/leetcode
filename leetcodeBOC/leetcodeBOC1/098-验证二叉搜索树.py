from collections import deque
from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def isValidBST(self, root: TreeNode):
        """
        :type root: TreeNode
        :rtype: bool
        """
        res = []

        def isBST(root: TreeNode):
            if root:
                isBST(root.left)
                res.append(root.val)
                isBST(root.right)

        isBST(root)

        return all([res[i] < res[i + 1] for i in range(len(res) - 1)])


def level(root):
    res = []
    if root:
        que = deque()
        que.append(root)
        while que:
            temp = que.popleft()
            res.append(temp.val)
            if temp.left:
                que.append(temp.left)
            if temp.right:
                que.append(temp.right)
    i, j = 0, len(res) - 1
    while i < j:
        if res[i] == res[j]:
            i += 1
            j -= 1
        else:
            return False
    return True


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
root = create(root, [1, 2, -1, 3, 4, -1, -1, -1, 2, -1, 3, -1, -1])
# printt(root)
level(root)
print(Solution().isValidBST(root))
