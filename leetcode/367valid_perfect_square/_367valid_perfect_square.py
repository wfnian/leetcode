#Given a positive integer num, write a function which returns True if num is a perfect square else False.
class Solution(object):
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        newNum = int(math.sqrt(num))
        return newNum**2 == num         #����һ
        if (len(str(math.sqrt(num)))-len(str(int(math.sqrt(num))))>2):
            return False                #������
        return True
                                        #������ ���ַ�