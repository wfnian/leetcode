class Solution(object):
    def cuttingRope(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 2: return 1
        if n == 3: return 2
        f = [0] * (n + 1)
        f[1] = 1
        f[2] = 2
        f[3] = 3
        for i in range(4, n + 1):
            max_ = 0
            for j in range(1, i):
                max_ = max(max_, f[j] * f[i - j])
            f[i] = max_
        return f[n]


print(Solution().cuttingRope(10))