class Solution(object):
    def compareVersion(self, version1, version2):
        """
        :type version1: str
        :type version2: str
        :rtype: int
        """
        v1 = version1.split('.')
        v2 = version2.split('.')
        i, j = 0, 0
        while i < len(v1) and j < len(v2):
            if int(v1[i]) < int(v2[j]):
                return -1
            if int(v1[i]) > int(v2[j]):
                return 1
            i += 1
            j += 1
        while i < len(v1):
            if int(v1[i]) != 0:
                return 1
            i += 1
        while j < len(v2):
            if int(v2[j]) != 0:
                return -1
            j += 1
        return 0


print(Solution().compareVersion("1.0.1", "1"))
