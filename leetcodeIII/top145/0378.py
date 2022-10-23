class Solution(object):
    def kthSmallest(self, matrix, k):
        """
        :type matrix: List[List[int]]
        :type k: int
        :rtype: int
        """
        n = len(matrix)
        ls = []
        for i in range(n):
            for j in range(n):
                ls.append(matrix[i][j])
        ls.sort()
        return ls[k - 1]


print(Solution().kthSmallest([[1, 5, 9], [10, 11, 13], [12, 13, 15]], 8))
