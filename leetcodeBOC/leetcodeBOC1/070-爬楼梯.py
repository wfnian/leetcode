class Solution:
    def climbStairs(self, n: int) -> int:
        dp = [1] * (n + 1)
        if n == 1:
            return 1
        dp[2] = 2
        for i in range(3, n + 1):
            dp[i] = dp[i - 1] + dp[i - 2]

        return dp[-1]


print(Solution().climbStairs(11))
