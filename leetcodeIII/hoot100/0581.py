class Solution(object):
    def findUnsortedSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        j = n - 1
        i = 0
        while i < j and nums[i + 1] >= nums[i]:
            i += 1
        while j > i and nums[j - 1] <= nums[j]:
            j -= 1

        min_ = nums[i]
        max_ = nums[j]
        l, r = i, j
        for i in range(l, r + 1):
            if nums[i] < min_:
                min_ = nums[i]
            if nums[i] > max_:
                max_ = nums[i]
        while l >= 0 and min_ < nums[l]:
            l -= 1
        while r < n and max_ > nums[r]:
            r += 1
        if r == l:
            return 0
        return r - l - 1


# print(Solution().findUnsortedSubarray([1, 2, 3, 4]))
print(Solution().findUnsortedSubarray([1]))
print(Solution().findUnsortedSubarray([2, 3, 6, 8, 10, 11, 15, 13, 9, 16, 17, 26, 19, 25, 23, 24, 27, 30, 32, 33]))
#!                                     0, 1, 2, 3, 4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19
