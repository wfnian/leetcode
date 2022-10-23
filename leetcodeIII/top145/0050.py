class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        res = 1
        mark = False
        if n < 0:
            mark = True
            n = -n
        while n:
            if n & 1:
                res = res * x
            x = x * x
            n = n >> 1
        if mark:
            return 1 / res
        return res


print(Solution().myPow(2, 0))
