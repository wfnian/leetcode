class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        size = len(s) - 1
        res = 0
        chrappear = False
        while size >= 0:
            if not chrappear and s[size] == ' ':
                size -= 1
                continue
            if chrappear and s[size] == ' ':
                break
            res += 1
            size -= 1
            chrappear = True
        return res


print(Solution().lengthOfLastWord("   fly me   to   the moon  "))
print(Solution().lengthOfLastWord("Hello World"))
print(Solution().lengthOfLastWord(" "))
