class Solution(object):
    def singleNumber(self, nums):
        array = []
        for i in range(len(nums)):
            if nums.count(nums[i])==1:
                array.append(nums[i])
        return array