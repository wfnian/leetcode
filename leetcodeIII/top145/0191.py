class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        res = 0
        while n:
            res += n & 1
            n = n >> 1
        return res


print(Solution().hammingWeight(11111111111111111111111111111101))