"""
Given a positive integer, check whether it has alternating bits: namely, 
if two adjacent bits will always have different values.

Example 1:
Input: 5
Output: True
Explanation:
The binary representation of 5 is: 101

Example 2:
Input: 7
Output: False
Explanation:
The binary representation of 7 is: 111.
"""
#my solution:
new = [0]
for i in range(32):#列表法，10 = 2，101 = 5，1010 = 10 10101 = 21，101010 = 42…… pow(2,31)<new32;
    if i%2==0:
        new.append(new[i]*2+1)
    else:
        new.append(new[i]*2)

class Solution(object):
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        global new
        return n in new


a = Solution()
print(a.hasAlternatingBits(5))
print(a.hasAlternatingBits(7))

##There are also much good solutions:
class Solution(object):
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return '00'in bin(n) and '11'in bin(n)#so crazy!!!