class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        res = 0
        min_len = len(strs[0])
        for s in strs:
            if len(s) < min_len:
                min_len = len(s)
        for i in range(min_len):
            d = set()
            for j in strs:
                d.add(j[res])
            if len(d) == 1:
                res += 1
            else:
                break
        return strs[0][:res]


print(Solution().longestCommonPrefix(["flower", "flow", "flight"]))
