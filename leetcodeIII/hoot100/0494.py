class Solution(object):
    def findTargetSumWays(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        ans = [0]

        def trace(nums, now, target, start_index):
            if start_index == len(nums):
                if now == target:
                    ans[0] += 1
                    return
            else:
                trace(nums, now + nums[start_index], target, start_index + 1)
                trace(nums, now - nums[start_index], target, start_index + 1)

        trace(nums, 0, target, 0)

        return ans[0]


print(Solution().findTargetSumWays([25, 18, 47, 13, 45, 29, 15, 45, 33, 19, 39, 15, 39, 45, 17, 21, 29, 43, 50, 10],
                                   25))
print(Solution().findTargetSumWays([1, 1, 1, 1], 0))
