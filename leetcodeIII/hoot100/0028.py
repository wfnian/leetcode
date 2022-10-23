class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """

        i, j = 0, 0
        m, n = len(haystack), len(needle)
        if n == 0: return 0

        while i < m and j < n:
            if haystack[i] == needle[j]:
                j += 1
            else:
                i = i - j
                j = 0
            i += 1
            if j == n:
                return i - j
        return -1


print(Solution().strStr("hello", "llop"))
print(Solution().strStr("a", "a"))
print(Solution().strStr("a", "b"))
print(Solution().strStr("aaaba", "ab"))
