from math import sqrt


class Solution(object):
    def numSquares(self, n):
        """
        :type n: int
        :rtype: int
        """
        f = (n + 1) * [0]
        for i in range(n + 1):
            f[i] = i
        for i in range(1, n + 1):
            for j in range(1, int(sqrt(i) + 1)):
                f[i] = min(f[i], f[i - j * j] + 1)
        return f[n]


print(Solution().numSquares(13))
