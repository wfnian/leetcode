# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def buildTree(self, preorder, inorder):
        """
        :type preorder: List[int]
        :type inorder: List[int]
        :rtype: TreeNode
        """
        def create(root, pre, ino):
            if pre:
                root = TreeNode(pre[0])
                root_index = 0
                for i in range(len(ino)):
                    if ino[i] == pre[0]:
                        root_index = i
                        break
                root.left = create(root.left, pre[1:], ino[:root_index])
                root.right = create(root.right, pre[root_index + 1:], ino[root_index + 1:])
            return root

        root = create(None, preorder, inorder)
        return root