class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # i, j = 0, 0
        # c = set()
        # m = 0
        # while i < len(s):
        #     if s[i] in c:
        #         c.remove(s[i])
        #         while j < i and s[j] != s[i]:
        #             j += 1
        #     c.add(s[i])
        #     i += 1
        #     m = max(m, i - j + 1)
        # return m
        pass


print(Solution().lengthOfLongestSubstring("abcabcbb"))
