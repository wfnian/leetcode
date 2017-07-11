# Given an m * n matrix M initialized with all 0's and several update operations.

# Operations are represented by a 2D array, and each operation is represented by 
# an array with two positive integers a and b, which means M[i][j] should be 
# added by one for all 0 <= i < a and 0 <= j < b.

# You need to count and return the number of maximum integers in the matrix 
# after performing all the operations.

# ////////////////////////////////////////////////////////////////////////////////
class Solution:
    def maxCount(self, m, n, ops):
        """
        :type m: int
        :type n: int
        :type ops: List[List[int]]
        :rtype: int
        """
        if (ops==[]):
            return m*n
        first = [i[0] for i in ops]
        second = [i[1] for i in ops]
        return min(first)*min(second)
a = Solution()
print(a.maxCount(39999,39999,[[2,2],[3,3]]))

# 学会分析问题，这道题暴力解决容易超时。
