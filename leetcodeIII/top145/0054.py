class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        m = len(matrix)
        n = len(matrix[0])
        r = n
        l = 0
        u = 0
        d = m
        res = []
        while True:
            for i in range(l, r):
                print(matrix[u][i], end=' ')
                res.append(matrix[u][i])
            u += 1
            print()
            if len(res) == m * n:
                break
            for i in range(u, d):
                print(matrix[i][r - 1], end=' ')
                res.append(matrix[i][r - 1])
            r -= 1
            print()
            if len(res) == m * n:
                break
            for i in range(l, r):
                print(matrix[d - 1][r - i], end=' ')
                res.append(matrix[d - 1][r - i])
            d -= 1
            print()
            if len(res) == m * n:
                break
            for i in range(u, d):
                print(matrix[d - i][l], end=' ')
                res.append(matrix[d - i][l])
            l += 1
            if len(res) == m * n:
                break
            print()
        return res


# Solution().spiralOrder([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
print()
import numpy as np

a = np.random.randint(9, size=(6, 7))
print(a)
Solution().spiralOrder(a)
