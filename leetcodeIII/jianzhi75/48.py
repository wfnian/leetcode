class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        i, j = 0, 0
        res = 0
        sets = set()
        while j < len(s):
            if s[j] not in sets:
                sets.add(s[j])
                j += 1
                res = max(res, j - i)
                continue
            while s[j] in sets:
                sets.remove(s[i])
                i += 1
        return res


print(Solution().lengthOfLongestSubstring("pwwkew"))
print(Solution().lengthOfLongestSubstring("bbbbb"))
print(Solution().lengthOfLongestSubstring("abcabcbb"))
