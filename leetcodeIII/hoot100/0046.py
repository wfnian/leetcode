class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []

        def trace(nums, path):
            if len(path) == len(nums):
                res.append(path[:])
                return
            for item in nums:
                if item in path:
                    continue
                path.append(item)
                trace(nums, path)
                path.pop()

        trace(nums, [])
        return res


print(Solution().permute([1, 2, 3]))
