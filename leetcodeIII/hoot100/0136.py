class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = 0
        for val in nums:
            res ^= val
        return res


print(Solution().singleNumber([1, 2, 1, 2, 4]))
