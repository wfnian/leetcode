class Solution(object):
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # n = len(nums)
        # sum1 = (n - 1) * (n) >> 1
        # sum2 = sum(nums)
        # return sum2 - sum1
        d = set()
        for num in nums:
            if num in d:
                return num
            d.add(num)
        return 0


print(Solution().findDuplicate([1, 2, 3, 3, 4]))
