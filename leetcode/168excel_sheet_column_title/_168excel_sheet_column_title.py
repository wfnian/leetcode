class Solution(object):
    #def convertToTitle(self, n):
    #    """
    #    :type n: int
    #    :rtype: str
    #    1 -> A
    #    2 -> B
    #    3 -> C
    #    ...
    #    26 -> Z
    #    27 -> AA
    #    28 -> AB 
    #    """
    #    s = ''
    #    while True:
    #        b = n//26
    #        s += chr(b+64)
    #        n = n%26
    #        s += chr(n+64)
    #        if n<=2:
    #            break
    #    return s
    def convertToTitle(self, n):
        r = ''
        while(n>0):
            n -= 1
            b = n%26
            r = chr(b+65) + r
            n //= 26
        return r
a = Solution()
c = a.convertToTitle(26)
print(c)