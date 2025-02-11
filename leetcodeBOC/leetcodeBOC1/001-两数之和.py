class Solution(object):
    def twoSum1(self, nums, target):
        for i in range(len(nums)):
            for j in range(len(nums)-1, i, -1):
                if i < j and nums[i]+nums[j] == target:
                    return [i, j]

    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d = dict()
        for i in range(len(nums)):
            if target-nums[i] in d:
                return [d[target-nums[i]], i]
            d[nums[i]] = i


print(Solution().twoSum([3, 2, 4], 6))
