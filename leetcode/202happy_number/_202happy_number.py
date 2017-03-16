"""
A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
"""


class Solution(object):
    def isHappy(self, n):
        def choose(n):
            if n == 1:
                return 1
            n = list(str(n))
            sum = 0
            for word in n:
                   sum+=pow(int(word),2) 
            return choose(sum)
            if n<=9:
                return 0
        return choose(n)
print(Solution().isHappy(7))
