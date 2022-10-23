class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        L, R = n * [nums[0]], n * [nums[-1]]
        m1, m2 = 1, 1

        for i in range(0, n):
            m1 = nums[i] * m1
            L[i] = m1
            m2 = nums[n - i - 1] * m2
            R[n - i - 1] = m2
        for i in range(1, n - 1):
            nums[i] = L[i - 1] * R[i + 1]
        nums[0] = R[1]
        nums[-1] = L[-2]
        return nums


print(Solution().productExceptSelf([-1, 1, 0, -3, 3]))
