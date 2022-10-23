class Solution(object):
    def partition(self, s):
        """
        :type s: str
        :rtype: List[List[str]]
        """
        res = []

        def trace(s, path, idx):
            if idx == len(s):
                res.append(path[:])
                return
            for i in range(idx, len(s)):
                if s[idx:i + 1] == s[idx:i + 1][::-1]:
                    path.append(s[idx:i + 1])
                    trace(s, path, i + 1)
                    path.pop()

        trace(s, [], 0)
        return res


print(Solution().partition("aab"))