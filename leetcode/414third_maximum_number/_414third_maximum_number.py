class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums = list(set(nums))
        nums.sort(reverse = True)
        if len(nums)==2:
            return nums[0]
        elif len(nums)==1:
            return nums[0]
        elif len(nums)>=3:
            return nums[2]
        else:
            return