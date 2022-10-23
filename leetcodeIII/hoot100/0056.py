class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        intervals.sort(key=lambda x: x[0])
        res = []

        for inter in intervals:
            if not res:
                res.append(inter)
            else:
                if inter[0] <= res[-1][1]:
                    if inter[1] > res[-1][1]:
                        res[-1][1] = inter[1]
                else:
                    res.append(inter)
        return res


print(Solution().merge([[1, 2], [2, 6], [8, 10], [15, 18]]))
print(Solution().merge([[1, 4], [2, 3]]))
