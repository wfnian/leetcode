class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []

        def trace(nums, path, idx):
            if len(path) == len(nums):
                res.append(path[:])
                return
            for i in range(idx, len(nums)):
                if nums[i] in path: continue
                path.append(nums[i])
                trace(nums, path, 0)
                path.pop()

        trace(nums, [], 0)
        return res


print(Solution().permute([1, 2, 3]))
