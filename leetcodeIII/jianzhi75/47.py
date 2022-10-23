class Solution(object):
    def maxValue(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        if not grid: return 0
        m, n = len(grid), len(grid[0])
        f = [[0] * n for _ in range(m)]
        f[0][0] = grid[0][0]
        for i in range(1, n):
            f[0][i] = f[0][i - 1] + grid[0][i]
        for i in range(1, m):
            f[i][0] = f[i - 1][0] + grid[i][0]
        for i in range(1, m):
            for j in range(1, n):
                f[i][j] = max(f[i - 1][j], f[i][j - 1]) + grid[i][j]
        return f[-1][-1]


print(Solution().maxValue([[1, 3, 1], [1, 5, 1], [4, 2, 1]]))
