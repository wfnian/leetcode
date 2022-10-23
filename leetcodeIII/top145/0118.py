class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        res = []
        res.append([1])
        res.append([1, 1])
        for i in range(2, numRows):
            tmp = [1] * (i + 1)
            for j in range(1, i):
                tmp[j] = res[-1][j - 1] + res[-1][j]
            res.append(tmp)
        return (res[:numRows])


print(Solution().generate(5))
