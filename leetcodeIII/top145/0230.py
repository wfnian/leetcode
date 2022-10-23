class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def kthSmallest(self, root, k):
        """
        :type root: TreeNode
        :type k: int
        :rtype: int
        """
        self.count = 0
        self.res = 0

        def inorder(root, k):
            if root:
                inorder(root.left, k)
                self.count += 1
                if self.count == k:
                    self.res = root.val
                    return root.val
                inorder(root.right, k)

        # return
        inorder(root, k)
        return self.res


def create(arr, root):
    if arr:
        if arr[0] != -1:
            root = TreeNode(arr[0])
            arr.pop(0)
            root.left = create(arr, root.left)
            root.right = create(arr, root.right)
            return root
        else:
            root = None
            arr.pop(0)
    return root


def printt(root):
    if root:
        printt(root.left)
        print(root.val, end=' ')
        printt(root.right)


tree = create([5, 3, 2, 1, -1, -1, -1, 4, -1, -1, 6, -1, -1], None)
# printt(tree)
print(Solution().kthSmallest(tree, 3))
