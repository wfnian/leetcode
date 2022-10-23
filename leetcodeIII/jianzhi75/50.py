class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: str
        """
        d = {}

        for elem in s:
            if elem in d:
                d[elem] += 1
            else:
                d[elem] = 1
        for elem in s:
            if d[elem] == 1:
                return elem
        return " "