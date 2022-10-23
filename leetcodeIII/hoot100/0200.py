class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        res = 0

        def dfs(grid, i, j):
            if i >= 0 and i < len(grid) and j >= 0 and j < len(grid[0]) and grid[i][j] == '1':
                grid[i][j] = '0'
                dfs(grid, i + 1, j)
                dfs(grid, i - 1, j)
                dfs(grid, i, j + 1)
                dfs(grid, i, j - 1)
            else:
                return

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == '1':
                    res += 1
                    dfs(grid, i, j)
        return res


print(Solution().numIslands([["1", "1", "0", "0", "0"], ["1", "1", "0", "0", "0"], ["0", "0", "1", "0", "0"],
                             ["0", "0", "0", "1", "1"]]))
