import queue


class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        que = []
        res = []
        if root:
            # res.append(root.val)
            que.append(root)
            while que:
                n = len(que)
                level = []
                for _ in range(n):
                    tmp = que.pop(0)
                    level.append(tmp.val)
                    if tmp.left:
                        que.append(tmp.left)
                    if tmp.right:
                        que.append(tmp.right)
                res.append(level)
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
            arr.pop(0)
            root = None
    else:
        return None


def printt(root):
    if root:
        print(root.val)
        printt(root.left)
        printt(root.right)


tree = create([1, 2, -1, -1, 3, -1, -1], None)
printt(tree)
print(Solution().levelOrder(tree))
tree = create([1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, -1], None)
# printt(tree)
print(Solution().levelOrder(tree))