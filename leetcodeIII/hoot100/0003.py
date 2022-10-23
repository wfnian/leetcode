class Solution1(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        i = 0
        j = i
        res = 0
        for i in range(len(s)):
            j = i
            sets = set()
            while j < len(s):
                if s[j] in sets:
                    break
                sets.add(s[j])
                j += 1

            res = max(res, j - i)
        return res


class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        i = 0
        j = 0
        res = 0
        sets = set()
        while j < len(s):
            while s[j] in sets:
                sets.remove(s[i])
                i += 1
            res = max(res, j - i + 1)
            sets.add(s[j])
            j += 1
        return res


print(Solution().lengthOfLongestSubstring("abcabcbb"))
print(Solution().lengthOfLongestSubstring("bbbbbb"))
print(Solution().lengthOfLongestSubstring("pwwkew"))