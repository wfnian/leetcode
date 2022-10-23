class TreeNode():
    def __init__(self, val=0, left=None, right=None) -> None:
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        res = []

        if root:
            que = []
            que.append(root)
            mark = True
            while que:
                row = []
                for _ in range(len(que)):
                    tmp = que.pop(0)
                    row.append(tmp.val)
                    if tmp.left:
                        que.append(tmp.left)
                    if tmp.right:
                        que.append(tmp.right)
                mark = not mark
                if mark:
                    res.append(row[::-1])
                else:
                    res.append(row)

        return res


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


def printt(root):
    if root:
        print(root.val, end=' ')
        printt(root.left)
        printt(root.right)


def level(root):
    res = []
    if root:
        que = []
        que.append(root)
        mark = True
        while que:
            row = []
            for _ in range(len(que)):
                tmp = que.pop(0)
                row.append(tmp.val)
                if tmp.left:
                    que.append(tmp.left)
                if tmp.right:
                    que.append(tmp.right)
            mark = not mark
            if mark:
                res.append(row[::-1])
            else:
                res.append(row)
        print(res)


root = create([1, 2, 4, 8, -1, -1, 9, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, -1], None)
# printt(root)
level(root)