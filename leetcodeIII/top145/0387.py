class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        d = dict()
        for elem in s:
            if elem in d:
                d[elem] += 1
            else:
                d[elem] = 1
        for idx, elem in enumerate(s):
            if d[elem] == 1:
                return idx
        return -1


print(Solution().firstUniqChar('aabb'))