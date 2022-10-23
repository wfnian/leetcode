import numpy as np


class Solution(object):
    def equalPairs(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        n = len(grid)
        res = 0
        for i in range(n):
            for j in range(n):
                cnt = 0
                for k in range(n):
                    if grid[i][k] == grid[k][j]:
                        cnt += 1
                    else:
                        break
                if cnt == n:
                    res += 1
        return res


print(Solution().equalPairs([[3, 1, 2, 2], [1, 4, 4, 5], [2, 4, 2, 2], [2, 4, 2, 2]]))
