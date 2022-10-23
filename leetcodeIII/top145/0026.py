class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        i = 0
        j = 1
        while i < j and j < len(nums):
            while j < len(nums) and nums[j] == nums[i]:
                j += 1
            if j < len(nums):
                i += 1
                nums[i] = nums[j]
                j += 1
        return nums[:i + 1]


print(Solution().removeDuplicates([1, 1]))
print(Solution().removeDuplicates([1, 1, 2]))
print(Solution().removeDuplicates([1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3]))
