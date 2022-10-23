class Solution(object):
    def addStrings(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        res = []
        extra = 0
        i, j = len(num1) - 1, len(num2) - 1
        while i >= 0 and j >= 0:
            tmp = (ord(num1[i]) + ord(num2[j]) - 96 + extra) % 10
            extra = (ord(num1[i]) + ord(num2[j]) - 96 + extra) // 10
            res.append(tmp)
            i -= 1
            j -= 1
        while i >= 0:
            tmp = (ord(num1[i]) - 48 + extra) % 10
            extra = (ord(num1[i]) - 48 + extra) // 10
            res.append(tmp)
            i -= 1
        while j >= 0:
            tmp = (ord(num2[j]) - 48 + extra) % 10
            extra = (ord(num2[j]) - 48 + extra) // 10
            res.append(tmp)
            j -= 1
        if extra:
            res.append(extra)
        return ''.join(map(str, res))[::-1]
        num = 0
        for i in range(len(res)):
            num += res[i] * 10**i

        return num


print(Solution().addStrings("11", "123"))
