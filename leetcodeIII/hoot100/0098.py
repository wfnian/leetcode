# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    p = -(2**31) - 1

    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """

        if root == None:
            return True
        if root.left and root.left.val >= root.val:
            return False
        if root.right and root.right.val <= root.val:
            return False

        if root:
            res = self.isValidBST(root.left)
            if not res:
                return False
            if root.val <= self.p:
                return False
            self.p = root.val
            res2 = self.isValidBST(root.right)
            if not res2:
                return False
        return True


def create(arr, root):
    if len(arr) == 0:
        return None
    if arr[0] != -1:
        root = TreeNode(arr[0])
        arr.pop(0)
        root.left = create(arr, root.left)
        root.right = create(arr, root.right)
        return root
    else:
        root = None
        return root


def createBST(val, rt):
    # if not root:
    #     root = TreeNode(val)
    #     return 1
    # else:
    #     if val == root.val:
    #         return 0
    #     elif val < root.val:
    #         if not root.left:  # 如果根结点没有左子树，则插入到左子树中
    #             root.left = TreeNode(val)
    #             return
    #         createBST(val, root.left)
    #     else:
    #         if not root.right:  # 如果根结点没有左子树，则插入到左子树中
    #             root.right = TreeNode(val)
    #             return
    #         createBST(val, root.right)
    root = rt
    if not root:
        root = TreeNode(val)
        return root
    else:
        if root.val == val:
            pass
        elif root.val > val:
            while True:
                if not root.left:
                    root.left = TreeNode(val)
                    return
                else:
                    root = root.left
        else:
            while True:
                if not root.right:
                    root.right = TreeNode(val)
                    return
                else:
                    root = root.right


def printt(root):
    if root:
        print(root.val, end=' ')
        printt(root.left)
        printt(root.right)


root = None
for i in [3, 1, 2, 4]:
    root = createBST(i, root)
printt(root)

# print(Solution().isValidBST(root))
