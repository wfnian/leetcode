class Solution(object):
    def exchange(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        i, j = 0, len(nums) - 1
        while i < j:
            while i < j and nums[i] & 1:
                i += 1
            while i < j and not nums[j] & 1:
                j -= 1
            if i < j:
                nums[i], nums[j] = nums[j], nums[i]
        return nums


print(Solution().exchange([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]))
