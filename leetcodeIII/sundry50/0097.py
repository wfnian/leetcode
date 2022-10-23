class Solution_wrong(object):
    def isInterleave(self, s1, s2, s3):
        """
        :type s1: str
        :type s2: str
        :type s3: str
        :rtype: bool
        """
        i, j, k = 0, 0, 0
        if len(s1) + len(s2) != len(s3): return False
        while i < len(s1) and j < len(s2) and k < len(s3):
            if s1[i] == s3[k]:
                i += 1
                k += 1
            elif s2[j] == s3[k]:
                j += 1
                k += 1
            else:
                return False
        return i == len(s1) and j == len(s2)


class Solution(object):
    def isInterleave(self, s1, s2, s3):
        """
        :type s1: str
        :type s2: str
        :type s3: str
        :rtype: bool
        """
        m = len(s1)
        n = len(s2)
        l = len(s3)
        if m + n != l: return False
        f = [[0] * (n + 1) for _ in range(m + 1)]
        f[0][0] = True
        for i in range(1, m + 1):
            f[i][0] = f[i - 1][0] and s1[i - 1] == s3[i - 1]
        for i in range(1, n + 1):
            f[0][i] = f[0][i - 1] and s2[i - 1] == s3[i - 1]
        for i in range(1, m + 1):
            for j in range(1, n + 1):
                f[i][j] = (f[i - 1][j] and s1[i - 1] == s3[i + j - 1]) or (f[i][j - 1]
                                                                           and s2[j - 1] == s3[i + j - 1])
        return f[-1][-1]


print(Solution().isInterleave("aabcc", "dbbca", "aadbbcbcac"))
print(Solution().isInterleave("aab", "dbbca", "aadbbcbcac"))
