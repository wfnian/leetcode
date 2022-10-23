class Solution(object):
    def subsetsWithDup(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """

        res = []

        def trace(nums, path, idx):
            res.append(path[:])
            if idx == len(nums):
                return
            for i in range(idx, len(nums)):
                if i > idx and nums[i] == nums[i - 1]: continue
                path.append(nums[i])
                trace(nums, path, i + 1)
                path.pop()

        trace(sorted(nums), [], 0)
        return res


print(Solution().subsetsWithDup([1, 2, 2]))
