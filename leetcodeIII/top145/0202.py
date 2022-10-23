class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        d = set()
        while True:
            res = 0
            while n:
                res += (n % 10) * (n % 10)
                n //= 10
            n = res
            if n == 1:
                return True
            if n in d:
                return False
            d.add(n)


print(Solution().isHappy(2))
