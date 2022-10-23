class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def sortedArrayToBST(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
        def create(root, nums, left, right):
            if left < right:
                mid = (left + right) // 2
                root = TreeNode(nums[mid])
                root.left = create(root.left, nums, left, mid - 1)
                root.right = create(root.right, nums, mid + 1, right)
                return root

        return create(None, nums, 0, len(nums) - 1)
