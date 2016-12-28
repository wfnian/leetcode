class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        s = list(s)
        s.sort()
        s = "".join(s)
        return s
main = Solution()
print(main.frequencySort("tree"))
print(main.frequencySort("Aabb"))
print(main.frequencySort("cccaaa"))