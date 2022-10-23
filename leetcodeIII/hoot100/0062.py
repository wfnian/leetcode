class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        f = m * [n * [1]]
        f[0][0] = 1

        for i in range(m):
            for j in range(n):
                if i == 0 or j == 0:
                    f[i][j] = 1
                else:
                    f[i][j] = f[i - 1][j] + f[i][j - 1]

        return f[m - 1][n - 1]


print(Solution().uniquePaths(7, 3))
