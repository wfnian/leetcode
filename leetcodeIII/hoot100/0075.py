class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        ptr = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                nums[i], nums[ptr] = nums[ptr], nums[i]
                ptr += 1
        for i in range(ptr, len(nums)):
            if nums[i] == 1:
                nums[i], nums[ptr] = nums[ptr], nums[i]
                ptr += 1
        return nums


print(Solution().sortColors([2, 0, 2, 1, 1, 0]))
print(Solution().sortColors([1, 0, 1]))
