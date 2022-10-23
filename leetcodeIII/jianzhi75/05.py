class Solution(object):
    def replaceSpace(self, s):
        """
        :type s: str
        :rtype: str
        """
        res = ""
        for item in s:
            if item == ' ':
                res += "%20"
            else:
                res += item
        return res