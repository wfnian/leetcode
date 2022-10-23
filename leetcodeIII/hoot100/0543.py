class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    max_ = 0

    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root:
            return 0
        left = self.height(root.left)
        right = self.height(root.right)

        if left + right + 1 > self.max_:
            self.max_ = left + right + 1

        return max(self.diameterOfBinaryTree(root.left), self.diameterOfBinaryTree(root.right), self.max_) - 1

    def height(self, root):
        if not root:
            return 0
        left = self.height(root.left)
        right = self.height(root.right)
        return max(left, right) + 1


def create(arr, root):
    if len(arr) == 0:
        return
    if arr[0] != -1:
        root = TreeNode(arr[0])
        arr.pop(0)
        root.left = create(arr, root.left)
        root.right = create(arr, root.right)
        return root
    else:
        root = None
        arr.pop(0)
        return


def printt(root):
    if root:
        print(root.val, end=' ')
        printt(root.left)
        printt(root.right)


# root = create([1, 2, 4, -1, -1, 5, -1, -1, 3, -1, -1], None)
root = create([1, 2, 4, 5, 6, -1, -1, -1, -1, 7, -1, 8, -1, 9, -1, -1, 3, -1, -1], None)
print(Solution().diameterOfBinaryTree(root))