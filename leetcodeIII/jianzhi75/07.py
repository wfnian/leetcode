from logging import root


class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution(object):
    def buildTree(self, preorder, inorder):
        """
        :type preorder: List[int]
        :type inorder: List[int]
        :rtype: TreeNode
        """
        if preorder and inorder:
            idx = 0
            for i in range(len(inorder)):
                if preorder[0] == inorder[i]:
                    idx = i
                    break
            root = TreeNode(inorder[idx])
            # print(preorder[1:idx + 1], preorder[idx + 1:])
            root.left = self.buildTree(preorder[1:idx + 1], inorder[:idx])
            root.right = self.buildTree(preorder[idx + 1:], inorder[idx + 1:])
            return root
        else:
            root = None


def printt(root):
    if root:
        print(root.val, end=' ')
        printt(root.left)
        printt(root.right)


printt(Solution().buildTree([3, 9, 20, 15, 7], [9, 3, 15, 20, 7]))
