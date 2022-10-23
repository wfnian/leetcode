class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """

        init = "1"
        for _ in range(1, n):
            i, j = 0, 0
            tmp = ""
            while j < len(init):
                while j < len(init) and init[j] == init[i]:
                    j += 1
                tmp += str(j - i) + init[j - 1]
                i = j
            init = tmp
        return init


print(Solution().countAndSay(30))