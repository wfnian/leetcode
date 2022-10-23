class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        res = ""
        i = 0
        j = 0
        while j < len(s) and i < len(s):
            while i < len(s) and s[i] == ' ':
                i += 1
            j = i
            temp = ""
            while j < len(s) and s[j] != ' ':
                temp += s[j]
                j += 1
            i = j
            if temp:
                res = ' ' + temp + res

        return res[1:]


print(Solution().reverseWords("a"))