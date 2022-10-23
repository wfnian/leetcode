class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        sum_ = (n + 1) * n // 2
        for num in nums:
            sum_ -= num
        return sum_


print(Solution().missingNumber([3, 0, 1]))
