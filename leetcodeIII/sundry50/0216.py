class Solution(object):
    def combinationSum3(self, k, n):
        """
        :type k: int
        :type n: int
        :rtype: List[List[int]]
        """
        self.res = []

        def trace(n, k, path, idx):
            if sum(path) == n and len(path) == k:
                self.res.append(path[:])
                return
            for i in range(idx, 10):
                if i in path:
                    continue
                path.append(i)
                trace(n, k, path, i + 1)
                path.pop()

        trace(n, k, [], 1)
        return self.res


print(Solution().combinationSum3(3, 9))
