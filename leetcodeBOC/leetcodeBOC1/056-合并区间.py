from typing import List


class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda x: x[0])
        res = []
        for elem in intervals:
            if not res:
                res.append(elem)
            else:
                if res[-1][1] >= elem[0]:
                    res[-1][1] = max(res[-1][1], elem[1])
                else:
                    res.append(elem)
        return res


print(Solution().merge([[1, 3], [2, 6], [8, 10], [15, 18]]))
print(Solution().merge([[1, 4], [4, 5]]))
print(Solution().merge([[1, 4], [2, 3]]))
