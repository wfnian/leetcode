class Solution(object):
    def combine(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: List[List[int]]
        """
        self.res = []

        def trace(n, path, k, idx):
            if len(path) == k:
                self.res.append(path[:])
                return
            for i in range(idx, n + 1):
                if i in path:
                    continue
                path.append(i)
                trace(n, path, k, i + 1)
                path.pop()

        trace(n, [], k, 1)
        return self.res


print(Solution().combine(4, 2))
