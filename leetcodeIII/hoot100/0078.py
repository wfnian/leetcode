class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []

        def trace(nums, path, start_index):

            res.append(path[:])
            for i in range(start_index, len(nums)):
                path.append(nums[i])
                trace(nums, path, i + 1)
                path.pop()

        trace(nums, [], 0)
        return res


print(Solution().subsets([1, 2, 3]))
