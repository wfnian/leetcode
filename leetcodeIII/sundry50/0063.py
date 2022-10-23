class Solution(object):
    def uniquePathsWithObstacles(self, obstacleGrid):
        """
        :type obstacleGrid: List[List[int]]
        :rtype: int
        """
        if obstacleGrid == [[1]] or obstacleGrid[0][0] == 1: return 0
        m = len(obstacleGrid)
        n = len(obstacleGrid[0])
        f = [n * [0] for _ in range(m)]
        f[0][0] = 1
        for i in range(1, n):
            if obstacleGrid[0][i - 1] == 1 or f[0][i - 1] == 0 or obstacleGrid[0][i]:
                f[0][i] = 0
            else:
                f[0][i] = 1
        for i in range(1, m):
            if obstacleGrid[i - 1][0] == 1 or f[i - 1][0] == 0 or obstacleGrid[i][0] == 1:
                f[i][0] = 0
            else:
                f[i][0] = 1
        for i in range(1, m):
            for j in range(1, n):
                if obstacleGrid[i - 1][j] != 1:
                    f[i][j] += f[i - 1][j]
                if obstacleGrid[i][j - 1] != 1:
                    f[i][j] += f[i][j - 1]
                if obstacleGrid[i][j]:
                    f[i][j] = 0
        return f[-1][-1]


# print(Solution().uniquePathsWithObstacles([[0, 0, 0], [0, 1, 0], [0, 0, 0]]))
print(Solution().uniquePathsWithObstacles([[0, 1]]))
