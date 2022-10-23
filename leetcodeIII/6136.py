class Solution(object):
    def arithmeticTriplets(self, nums, diff):
        """
        :type nums: List[int]
        :type diff: int
        :rtype: int
        """
        res = 0
        for i in range(len(nums) - 2):
            for j in range(i + 1, len(nums) - 1):
                if nums[j] - nums[i] == diff:
                    for k in range(j + 1, len(nums)):
                        if nums[k] - nums[j] == diff:
                            res += 1
        return res


print(Solution().arithmeticTriplets([4, 5, 6, 7, 8, 9], 2))
