class TreeNode(object):
    def __init__(self, x, left=None, right=None):
        self.val = x
        self.left = left
        self.right = right


class Solution1(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        que = []
        res = []
        if root:
            que.append(root)
            while que:
                for _ in range(len(que)):
                    tmp = que.pop(0)
                    res.append(tmp.val)
                    if tmp.left:
                        que.append(tmp.left)
                    if tmp.right:
                        que.append(tmp.right)
        return res


class Solution2(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        que = []
        res = []
        if root:
            que.append(root)
            while que:
                val = []
                for _ in range(len(que)):
                    tmp = que.pop(0)
                    val.append(tmp.val)
                    if tmp.left:
                        que.append(tmp.left)
                    if tmp.right:
                        que.append(tmp.right)
                res.append(val)
        return res


class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        que = []
        res = []
        mark = False
        if root:
            que.append(root)
            while que:
                val = []
                for _ in range(len(que)):
                    tmp = que.pop(0)
                    val.append(tmp.val)
                    if tmp.left:
                        que.append(tmp.left)
                    if tmp.right:
                        que.append(tmp.right)
                if mark:
                    res.append(val[::-1])
                else:
                    res.append(val)
                mark = not mark
        return res


def create(arr, tree):
    if arr:
        if arr[0] != -1:
            tree = TreeNode(arr[0])
            arr.pop(0)
            tree.left = create(arr, tree.left)
            tree.right = create(arr, tree.right)
            return tree
        else:
            tree = None
            arr.pop(0)


def output(tree):
    if tree:
        print(tree.val, end=' ')
        output(tree.left)
        output(tree.right)


tree = create([1, 2, 3, -1, -1, 4, 5, -1, -1, 6, -1, -1, 7, -1, -1], None)
# output(tree)
print(Solution().levelOrder(tree))