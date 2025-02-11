class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d = dict()
        for i in range(len(nums)):
            d[nums[i]] = i
        for i in range(len(nums)):
            if target-nums[i] in d and d[target-nums[i]] != i:
                return [i, d[target-nums[i]]]


print(Solution().twoSum([2, 7, 11, 15], 9))
print(Solution().twoSum([3, 2, 4], 6))
