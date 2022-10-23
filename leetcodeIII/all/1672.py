class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        res = 0
        for col in accounts:
            sum = 0
            for row in col:
                sum += row
            res = max(sum, res)
        print(res)
        return res


res = Solution().maximumWealth([[2, 8, 7], [7, 1, 3], [1, 9, 5]])
