class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        res = ""
        i, j = 0, 0
        while j < len(s):
            while j < len(s) and s[j] == ' ':
                j += 1
            i = j
            tmp = ""
            while i < len(s) and s[i] != ' ':
                tmp += s[i]
                i += 1
            j = i
            if tmp:
                res = ' ' + tmp + res
            # break
        return res[1:]


print(Solution().reverseWords(" a good   example"))
print(Solution().reverseWords("  hello world!  "))
print(Solution().reverseWords("the  sky is blue"))