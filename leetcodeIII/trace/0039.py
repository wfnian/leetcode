class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """

        res = []

        def trace(cand, target, path, idx):
            if sum(path) == target:
                res.append(path[:])
                return
            for i in range(idx, len(cand)):
                if cand[i] > target or sum(path) > target:
                    continue
                path.append(cand[i])
                trace(cand, target, path, i)
                path.pop()

        trace(candidates, target, [], 0)
        return res


print(Solution().combinationSum([2, 3, 6, 7], 7))
