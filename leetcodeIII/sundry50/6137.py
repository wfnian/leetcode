class Solution(object):
    def validPartition(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n = len(nums)
        f = [0] * n
        f[0] = 0
        f[1] = (nums[0] == nums[1])
        if n > 2:
            f[2] = nums[0] == nums[1] == nums[2] or nums[2] - nums[1] == 1 and nums[1] - nums[0] == 1
            for i in range(3, n):
                if nums[i] == nums[i - 1] and f[i - 2]:
                    f[i] = True
                elif nums[i] == nums[i - 1] == nums[i - 2] and f[i - 3]:
                    f[i] = True
                elif nums[i] - nums[i - 1] == 1 and nums[i - 1] - nums[i - 2] == 1 and f[i - 3]:
                    f[i] = True
        return f[n - 1]
