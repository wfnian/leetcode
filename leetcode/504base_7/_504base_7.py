class Solution(object):
    def convertToBase7(self, num):
        """
        :type num: int
        :rtype: str
        """
        st = ""
        if num<0:
            num = -num
            while True:
                st+=str(num%7)
                num//=7
                if num==0:
                    break
            return '-'+st[::-1]
        else:
            while True:
                st+=str(num%7)
                num//=7
                if num==0:
                    break
            return st[::-1]
print(Solution().convertToBase7(100))
