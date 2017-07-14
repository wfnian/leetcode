"""////////////////////////////////////
Given an integer, write an algorithm to 
convert it to hexadecimal. For negative 
integer, two’s complement method is used.


NOTE!!!
You must not use any method provided by the 
library which converts/formats the number to hex directly.###I used hex()
///////////////////////////////////////"""
class Solution(object):
    def toHex(self, num):
        """
        :type num: int
        :rtype: str
        """
        if num<0:
            return hex(2**32+num)[2:]
        return hex(num)[2:]
a = Solution()

a.toHex(26)   #la
a.toHex(-1)   #ffffffff