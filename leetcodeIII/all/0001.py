from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = dict()
        for idx, val in enumerate(nums):
            if target - val in d:
                return [d[target - val], idx]
            d[val] = idx


res = Solution()
print(res.twoSum([2, 7, 11, 15], 9))
print(res.twoSum([3, 2, 4], 6))
print(res.twoSum([3, 3], 6))
