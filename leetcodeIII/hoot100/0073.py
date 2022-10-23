class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        row, col = [0] * len(matrix), [0] * len(matrix[0])
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if not matrix[i][j]:
                    row[i], col[j] = True, True
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if col[j] or row[i]:
                    matrix[i][j] = 0

        return matrix


print(Solution().setZeroes([[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]))
print(Solution().setZeroes([[0]]))
