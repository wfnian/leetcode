class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        flag = 1
        if n < 0:
            n = -n
            flag = 0
        res = 1
        while n:
            if n & 1:
                res *= x
            n >>= 1
            x *= x
        if not flag:
            return 1 / res
        return res


print(Solution().myPow(2, 0))
