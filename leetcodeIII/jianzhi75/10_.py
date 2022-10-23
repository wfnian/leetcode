class Solution(object):
    def numWays(self, n):
        """
        :type n: int
        :rtype: int
        """
        f = (n + 1) * [0]
        f[0] = 1
        if n > 0:
            f[1] = 1
            for i in range(2, n + 1):
                f[i] = int((f[i - 1] + f[i - 2]) % (1e9 + 7))
        return f[n]


print(Solution().numWays(100))