class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        f = nums[:]
        for i in range(1, n):
            f[i] = max(f[i], f[i - 1] + nums[i])
        return max(f)


print(Solution().maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))
