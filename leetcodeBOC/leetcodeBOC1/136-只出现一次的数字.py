from typing import List


class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        d = set()
        s = set()
        for item in nums:
            if item in s:
                continue
            if item in d:
                d.remove(item)
                s.add(item)
            else:
                d.add(item)
        return list(d)[-1]


print(Solution().singleNumber([4, 1, 2, 1, 2]))
