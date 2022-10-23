class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def invertTree(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        if root:
            tmp = root.left
            root.left = root.right
            root.right = tmp
            self.invertTree(root.left)
            self.invertTree(root.right)


class Tree():
    def __init__(self, arr) -> None:
        self.arr = arr

    def create(self, T):
        if self.arr:
            if self.arr[0] != -1:
                T = TreeNode(self.arr[0])
                self.arr.pop(0)
                T.left = self.create(T.left)
                T.right = self.create(T.right)
            else:
                T = None
                self.arr.pop(0)
        return T

    def printt(self, T):
        if T:
            print(T.val)
            self.printt(T.left)
            self.printt(T.right)


def create_tree(root=None, arr=[]):
    if len(arr) == 0:  #终止条件：val用完了
        return root
    if arr[0] != '#':  #本层需要干的就是构建Root、Root.left、Root.right三个节点。
        root = TreeNode(arr[0])
        arr.pop(0)
        root.left = create_tree(root.left, arr)
        root.right = create_tree(root.right, arr)
        return root  #本次递归要返回给上一次的本层构造好的树的根节点
    else:
        root = None
        arr.pop(0)
    return root


a = Tree([1, 2, -1, 3, -1, -1, 2, -1, 3, -1, -1])
tree = a.create(None)
a.printt(tree)
