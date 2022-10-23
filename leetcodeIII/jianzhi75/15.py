class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        res = 0
        while n:
            res += 1
            n = (n - 1) & n

        return res


class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        res = 0
        flag = 1
        for _ in range(32):
            if n & flag:
                res += 1
            flag <<= 1

        return res
