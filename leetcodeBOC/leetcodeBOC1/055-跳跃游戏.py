from typing import List


class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n = len(nums)
        dp = [0] * n
        dp[0] = 1
        for i in range(1, n):
            for j in range(i):
                if nums[j] + j >= i and dp[j] == 1:
                    dp[i] = 1
                    break
        return dp[-1]


Solution().canJump([2, 3, 1, 1, 4])
Solution().canJump([3, 2, 1, 0, 4])
