class Solution(object):
    def lengthOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        f = [1]*n
        for i in range(1, n):
            for j in range(i):
                if nums[i] > nums[j]:
                    f[i] = max(f[i], f[j]+1)
        # print(f)
        return max(f)


print(Solution().lengthOfLIS([10, 9, 2, 5, 3, 7, 101, 18]))
print(Solution().lengthOfLIS([0, 1, 0, 3, 2, 3]))
print(Solution().lengthOfLIS([7, 7, 7, 7, 7, 7, 7]))
