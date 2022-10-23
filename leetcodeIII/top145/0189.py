class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        k = k % len(nums)
        d = len(nums) - k
        nums[:d] = nums[:d][::-1]
        nums[d:] = nums[d:][::-1]
        nums.reverse()


print(Solution().rotate([1, 2, 3, 4, 5, 6, 7], 3))
