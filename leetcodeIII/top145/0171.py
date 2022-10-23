class Solution(object):
    def titleToNumber(self, columnTitle):
        """
        :type columnTitle: str
        :rtype: int
        """
        res = 0
        n = len(columnTitle) - 1
        for i in range(len(columnTitle)):
            res += (ord(columnTitle[i]) - ord('A') + 1) * 26**(n - i)
        return res


print(Solution().titleToNumber('ACA'))
