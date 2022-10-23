class Solution1(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        f = [0] * len(nums)
        f[0] = nums[0]
        res = f[0]
        for i in range(1, len(nums)):
            if f[i - 1] < 0:
                f[i] = nums[i]
            else:
                f[i] = f[i - 1] + nums[i]
            res = max(f[i], res)

        return res


class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        f = nums[:]
        for i in range(1, len(nums)):
            f[i] = max(nums[i], f[i - 1] + nums[i])

        return max(f)


print(Solution1().maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))
print(Solution1().maxSubArray([2, 1, -3]))
print(Solution().maxSubArray([-2, 1]))
print(Solution().maxSubArray([1]))
print(Solution().maxSubArray([-1]))
