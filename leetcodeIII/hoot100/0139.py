class Solution(object):
    def wordBreak(self, s, wordDict):
        """
        :type s: str
        :type wordDict: List[str]
        :rtype: bool
        """
        n = len(s)
        f = [False] * (n + 1)
        words = set(wordDict)
        f[0] = True
        for i in range(1, n + 1):
            for j in range(i):
                if f[j] and s[j:i] in words:
                    f[i] = True
                    break
        return f[-1]


print(Solution().wordBreak("catsandog", ["cats", "dog", "sand", "and", "cat"]))
