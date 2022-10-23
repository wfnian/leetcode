class Solution(object):
    def repeatedCharacter(self, s):
        """
        :type s: str
        :rtype: str
        """
        d = dict()
        for i in s:
            if i in d:
                return i
            else:
                d[i] = 0
        return 0


print(Solution().repeatedCharacter("abccbaacz"))