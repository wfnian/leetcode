import numpy as np
matrix = [[1,2],[2,2]]

class Solution:
    def isToeplitzMatrix(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: bool
        """
        if matrix == []:
            return True
        a = len(matrix)
        b = len(matrix[0])
        for i in range(0,b-1):
            if len(set(list(np.array(matrix).diagonal(i))))>1:
                return False
        for i in range(1,a-1):
            if len(set(list(np.array(matrix).diagonal(-i))))>1:
                return False
        
        return True
a=Solution()
        
print(a.isToeplitzMatrix(matrix))

