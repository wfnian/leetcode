class Solution(object):
    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        res = []
        candidates.sort()

        def trace(cand, target, path, idx, pos):
            if sum(path) == target:
                if path not in res:
                    res.append(path[:])
                    return
            for i in range(idx, len(cand)):
                if cand[i] > target or sum(path) > target:
                    continue
                if i > idx and cand[i] == cand[i - 1]:
                    continue
                path.append(cand[i])
                trace(cand, target, path, i + 1, pos)
                path.pop()

        trace(candidates, target, [], 0, 0)
        return res


print(Solution().combinationSum2([10, 1, 2, 7, 6, 1, 5], 8))
print(Solution().combinationSum2([2, 5, 2, 1, 2], 5))
