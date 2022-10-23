class Solution(object):
    def findSubsequences(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []

        def trace(nums, path, idx):
            # if idx == len(nums):
            #     return
            if len(path) >= 2:
                res.append(path[:])
            for i in range(idx, len(nums)):
                if len(path) > 0 and nums[i] < path[-1]:
                    continue
                if i > idx and nums[i] == nums[i - 1]: continue
                path.append(nums[i])
                trace(nums, path, i + 1)
                path.pop()

        trace(nums, [], 0)
        return res


# print(Solution().findSubsequences([4, 6, 7, 7]))
# print(Solution().findSubsequences([4, 4, 3, 2, 1]))
print(Solution().findSubsequences([1, 3, 2, 2]))
