class Solution(object):
    def numberOfArithmeticSlices(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        if n < 3: return 0
        f = [0] * n
        for i in range(2, n):
            if nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]:
                f[i] = f[i - 1] + 1

        return sum(f)


print(Solution().numberOfArithmeticSlices([1, 2, 3, 4]))
