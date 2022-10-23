class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        res = 0
        min_ = len(strs[0])
        for i in strs:
            min_ = min(len(i), min_)
        while res < min_:
            d = set()
            for s in strs:
                d.add(s[res])
            if len(d) == 1:
                res += 1
            else:
                break
        return strs[0][:res]


print(Solution().longestCommonPrefix(["flower", "flow", "flight"]))
print(Solution().longestCommonPrefix(["dog", "racecar", "car"]))
