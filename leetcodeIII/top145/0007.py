class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        n = x
        res = []
        mark = False
        if n < 0:
            mark = True
            n = -n
        while n:
            a = n % 10
            n = n // 10
            res.append(a)
        r = 0
        for i in res:
            r = r * 10 + i
        if r > 2**31 - 1:
            return 0
        if mark:
            return -r
        return r


print(Solution().reverse(-2147483412))
