class Solution(object):
    def findPeakElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        self.res = -1
        if len(nums) == 1:
            return 0

        def divide(nums, left, right):
            if left <= right and left >= 0 and right < len(nums):
                mid = (left + right) // 2
                if mid == 0 and mid < len(nums) and nums[mid] > nums[1]:
                    self.res = 0
                    return mid
                if mid == len(nums) - 1 and mid > 0 and nums[mid] > nums[mid - 1]:
                    self.res = mid
                    return mid
                if mid > 0 and mid <= len(nums) - 2 and nums[mid] > nums[mid - 1] and nums[mid] > nums[mid + 1]:
                    self.res = mid
                    return mid
                divide(nums, left, mid - 1)
                divide(nums, mid + 1, right)
                return -1
            else:
                return -1

        divide(nums, 0, len(nums) - 1)
        return self.res


print(Solution().findPeakElement([2, 1]))
