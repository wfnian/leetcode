# class Solution:

#     res = ""
#     path = []
#     max_len = 0

#     def longestPalindrome(self, s: str) -> str:
#         self.backtrace(0, s)
#         return self.res

#     def backtrace(self, start_index, s):
#         print(''.join(self.path))
#         if self.palindroma(self.path):
#             if len(self.path) > self.max_len:
#                 self.max_len = len(self.path)
#                 self.res = ''.join(self.path)
#         for i in range(start_index, len(s)):
#             self.path.append(s[i])
#             self.backtrace(i+1, s)
#             self.path.pop()

#     def palindroma(self, s):
#         i, j = 0, len(s)-1
#         while i < j:
#             if s[i] != s[j]:
#                 return False
#             i += 1
#             j -= 1
#         return True
class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        start, end = 0, 0
        for i in range(len(s)):
            l1, r1 = self.expand(i, i, s)
            l2, r2 = self.expand(i, i+1, s)
            if end-start < r1-l1:
                start, end = l1, r1
            if end-start < r2-l2:
                start, end = l2, r2
        return s[start: end+1]

    def expand(self, l, r, s):
        i, j = l, r
        while i >= 0 and j < len(s):
            if s[i] == s[j]:
                i -= 1
                j += 1
            else:
                break
        return i+1, j-1

        # print(Solution().backtrace(0, "cbbd"))
print(Solution().longestPalindrome("cb"))
# print(Solution().longestPalindrome("cbbd"))
