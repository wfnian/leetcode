from typing import List


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        n = len(nums)
        dp = nums[:]
        for i in range(1, len(nums)):
            if dp[i] < dp[i - 1] + nums[i]:
                dp[i] = dp[i - 1] + nums[i]

        return max(dp)


Solution().maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4])
Solution().maxSubArray([1])
Solution().maxSubArray([5, 4, -1, 7, 8])
