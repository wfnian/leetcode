class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        d = {}
        n = len(nums)
        res = []
        for num in nums:
            if num not in d:
                d[num] = 1
        for i in range(1, n + 1):
            if i not in d:
                res.append(i)
        return res


print(Solution().findDisappearedNumbers([4, 3, 2, 7, 8, 2, 3, 1]))
