class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        j = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                nums[j], nums[i] = nums[i], nums[j]
                j += 1
        return nums


print(Solution().moveZeroes([0, 1, 0, 3, 12]))
print(Solution().moveZeroes([1, 0]))
print(Solution().moveZeroes([0, 0]))
print(Solution().moveZeroes([0, 0, 0, 0, 0, 0, 0, 0, 1]))
print(Solution().moveZeroes([1, 0, 0]))
