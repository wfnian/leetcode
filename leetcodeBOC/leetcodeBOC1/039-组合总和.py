from typing import List


class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []

        def trace(path, candidates, target, start_index):
            if sum(path) == target:
                res.append(path[:])
                return
            for idx in range(start_index, len(candidates)):
                if sum(path) > target:
                    continue
                else:
                    path.append(candidates[idx])
                    trace(path, candidates, target, idx)
                    path.pop()
            return
        trace([], candidates, target, 0)
        return res


print(Solution().combinationSum([2, 3, 6, 7], 7))
