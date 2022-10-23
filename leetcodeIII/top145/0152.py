class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        dp_max = nums[:]
        dp_min = nums[:]

        for i in range(1, n):
            dp_max[i] = max(dp_max[i - 1] * nums[i], nums[i], dp_min[i - 1] * nums[i])
            dp_min[i] = min(dp_max[i - 1] * nums[i], nums[i], dp_min[i - 1] * nums[i])
        return max(dp_max)


print(Solution().maxProduct([3, -2, 5, -3, 0, 2, 5]))
