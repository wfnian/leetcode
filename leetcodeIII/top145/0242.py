class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        count = [0] * 26
        if len(s) != len(t): return False

        for i in range(len(s)):
            count[ord(s[i]) - ord('a')] += 1
        for i in range(len(t)):
            count[ord(t[i]) - ord('a')] -= 1
        for i in range(26):
            if count[i] != 0:
                return False
        return True


print(Solution().isAnagram("rat", "cat"))
