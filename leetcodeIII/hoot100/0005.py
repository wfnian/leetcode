from copy import copy


class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        start, end = 0, 0
        res = 0
        for i in range(len(s) - 1):
            left1, right1 = self.expand(s, i, i)
            left2, right2 = self.expand(s, i, i + 1)
            if right1 - left1 > end - start:
                start, end = left1, right1
            if right2 - left2 > end - start:
                start, end = left2, right2

        return s[start:end + 1]

    def expand(self, s, left, right):
        L, R = left, right
        while L >= 0 and R < len(s):
            if s[L] == s[R]:
                L -= 1
                R += 1
            else:
                break
        return L + 1, R - 1


print(Solution().longestPalindrome("cbbd"))
print(Solution().longestPalindrome("babad"))
