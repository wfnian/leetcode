import sunau


class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def pathSum(self, root, targetSum):
        """
        :type root: TreeNode
        :type targetSum: int
        :rtype: List[List[int]]
        """
        res = []

        def dfs(root, path, target):
            if not root:
                return
            path.append(root.val)
            if not root.left and not root.right and sum(path) == target:
                res.append(path[:])
                # return
            dfs(root.left, path, target)
            dfs(root.right, path, target)
            path.pop()

        dfs(root, [], targetSum)
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
    else:
        return None


def printt(tree):
    if tree:
        print(tree.val, end=' ')
        printt(tree.left)
        printt(tree.right)
    # else:
    #     print()


tree = create([5, 4, 11, 2, -1, -1, 7, -1, -1, 8, 13, -1, -1, 4, 5, -1, -1, 1, -1, -1], None)
tree = create([5, 4, 11, 7, -1, -1, 2, -1, -1, 8, 13, -1, -1, 4, 5, -1, -1, 1, -1, -1], None)
# printt(tree)
print(Solution().pathSum(tree, 22))
