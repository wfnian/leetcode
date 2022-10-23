class Solution(object):
    def countSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        res = [0]

        def center(s, i, j):
            while i >= 0 and j < len(s):
                if s[i] == s[j]:
                    res[0] += 1
                    i -= 1
                    j += 1

                else:
                    break

        for i in range(len(s)):
            center(s, i, i + 1)
            center(s, i, i)
        return res[0]


print(Solution().countSubstrings('aaaaaaaaaaaa'))
