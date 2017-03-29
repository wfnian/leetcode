class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        return int(str(bin(num))[2:].replace('0','2').replace('1','0').replace('2','1'),2)