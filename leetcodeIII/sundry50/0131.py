class Solution(object):
    def partition(self, s):
        """
        :type s: str
        :rtype: List[List[str]]
        """
        def ispalindrome(s, i, j):
            while i < j:
                if s[i] != s[j]:
                    return False
                i += 1
                j -= 1
            return True

        def trace(s, path, idx):
            if idx == len(s):
                print(path[:])
                return
            for i in range(idx + 1, len(s) + 1):
                if ispalindrome(s[idx:i], idx + 1, i - 1):
                    path.append(s[idx:i])
                    trace(s, path, i)
                    path.pop()

        trace(s, [], 0)


print(Solution().partition("aab"))
