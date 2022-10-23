class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def postorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        res = []
        stack = []
        if root:
            stack.append(root)
            while stack:
                tmp = stack.pop()
                res.append(tmp.val)
                if tmp.left:
                    stack.append(tmp.left)
                if tmp.right:
                    stack.append(tmp.right)
        return res[::-1]


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


tree = create([1, 2, 4, -1, -1, 5, -1, -1, 3, -1, -1], None)
# printt(tree)
print(Solution().postorderTraversal(tree))