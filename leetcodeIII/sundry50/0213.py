class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        if n == 1: return nums[0]

        nums1 = nums[1:][:]  # 不抢头
        nums2 = nums[:-1][:]  # 不抢尾
        nums3 = nums[1:-1][:]

        def rob1(nums):
            if not nums: return 0
            n = len(nums)
            if n == 1: return nums[0]
            if n == 2: return max(nums)
            f = [0] * n
            f[0] = nums[0]
            f[1] = max(nums[0], nums[1])
            for i in range(2, n):
                f[i] = max(f[i - 2] + nums[i], f[i - 1])
            return max(f)

        # return rob1(nums2)
        return max(rob1(nums1), rob1(nums2), rob1(nums3))


# print(Solution().rob([2, 7, 9, 3, 1]))
print(Solution().rob([1, 2, 3, 1]))
# print(Solution().rob([2, 3, 2]))
