class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        i = j = 0
        res = 0
        d = set()
        while i < len(s):
            while s[i] in d:
                d.remove(s[j])
                j += 1
            res = max(res, i-j+1)
            d.add(s[i])
            i += 1
        return res


print(Solution().lengthOfLongestSubstring("abcabcbb"))
print(Solution().lengthOfLongestSubstring("bbbbbb"))
print(Solution().lengthOfLongestSubstring("pwwkew"))
