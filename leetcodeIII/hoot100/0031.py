class Solution(object):
    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        i = len(nums) - 2
        j = len(nums) - 1
        while i >= 0 and nums[i] >= nums[i + 1]:
            i -= 1
        if i >= 0:
            while j >= 0 and nums[j] <= nums[i]:
                j -= 1
            nums[i], nums[j] = nums[j], nums[i]
        l = i + 1
        r = len(nums) - 1
        while l < r:
            nums[l], nums[r] = nums[r], nums[l]
            l += 1
            r -= 1
        return nums


print(Solution().nextPermutation([1, 5, 2, 4, 3, 2]))
print(Solution().nextPermutation([3, 2, 1]))
