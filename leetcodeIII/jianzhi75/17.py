class Solution(object):
    def printNumbers(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        res = [0] * (10**n - 1)
        for i in range(0, 10**n - 1):
            res[i] = i + 1
        return res


print(Solution().printNumbers(0))