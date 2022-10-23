from logging import root
from numpy import append


class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Codec:
    def serialize(self, root):
        """Encodes a tree to a single string.
        
        :type root: TreeNode
        :rtype: str
        """
        res = []

        def pre(res, root):

            if root:
                res.append(str(root.val) + ',')
                pre(res, root.left)
                pre(res, root.right)
            else:
                res.append('-10000,')

        pre(res, root)
        return str(res)

    def deserialize(self, data):
        """Decodes your encoded data to tree.
        
        :type data: str
        :rtype: TreeNode
        """
        arr = eval(data)

        def create(arr, root):
            if arr:
                val = eval(arr[0])[0]
                if val != -10000:
                    root = TreeNode(val)
                    arr.pop(0)
                    root.left = create(arr, root.left)
                    root.right = create(arr, root.right)
                    return root
                else:
                    root = None
                    arr.pop(0)
            return None

        root = create(arr, None)
        return root


def create(root, arr):
    if len(arr) == 0:
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
        print(root.val, end=' ')

        printt(root.left)
        printt(root.right)


tree = None
tree = create(tree, [1, 2, -1, -1, 3, -1, -1])
res = Codec().serialize(tree)
print(res)
root = Codec().deserialize(res)
printt(root)
