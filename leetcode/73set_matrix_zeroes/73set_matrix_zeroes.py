"""
C语言和这个差不多，做起来真累、、
C语言版本是O（n）^4,效率太低
python版本是O（n）^2
"""
class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: void Do not return anything, modify matrix in-place instead.
        """
        a = len(matrix[0])
        b = len(matrix)
        numsa = [1]*a
        numsb = [1]*b
        for i in range(b):
            if 0 in matrix[i]:
                numsb[i] = 0
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if matrix[i][j] == 0:
                    numsa[j] = 0
        for i in range(b):
            for j in range(a):
                if numsa[j]==0:
                    matrix[i][j]=0
        for i in range(b):
            if numsb[i]==0:
                matrix[i] = [0]*a
        #print(matrix)
        #return 0;

s = Solution()
a = int(input("行"))
b = int(input("列"))
matrix = [[]]
for i in range(a):
    for j in range(b):
        matrix[i].append(int(input()))
    matrix.append([])
matrix.pop(-1)
print(matrix)
s.setZeroes(matrix)