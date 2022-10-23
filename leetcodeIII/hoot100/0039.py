class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """

        res = []

        def trace(candidates, target, path, start_index):
            if sum(path) == target:
                res.append(path[:])
                return
            for i in range(start_index, len(candidates)):
                if sum(path) > target:
                    continue
                path.append(candidates[i])
                trace(candidates, target, path, i)
                path.pop()
            return

        trace(candidates, target, [], 0)
        return res


print(Solution().combinationSum([2, 3, 4, 6, 7], 7))
