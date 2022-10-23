class Solution:
    def climbStairs(self, n: int) -> int:
        f = [0] * (n + 1)
        f[1] = 1
        if n >= 2:
            f[2] = 2
            for i in range(3, n + 1):
                f[i] = f[i - 1] + f[i - 2]
        return f[n]


print(Solution().climbStairs(3))
