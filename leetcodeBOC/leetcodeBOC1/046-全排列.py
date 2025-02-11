from typing import List


class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []

        def trace(nums, path):
            if len(path) > len(nums):
                return
            if len(path) == len(nums):
                res.append(path[:])
                return
            for i in range(len(nums)):
                if nums[i] not in path:
                    path.append(nums[i])
                    trace(nums, path)
                    path.pop()

        trace(nums,  [])
        return res


print(Solution().permute([1]))
