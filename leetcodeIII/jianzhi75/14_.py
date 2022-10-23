class Solution(object):
    def cuttingRope(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 2: return 1
        if n == 3: return 2

        res = 1
        while n > 4:
            res *= 3
            res %= (1e9 + 7)
            res = int(res)
            n -= 3
        return int((res * n) % (1e9 + 7))


print(Solution().cuttingRope(100))