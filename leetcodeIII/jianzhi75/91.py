class Solution(object):
    def minCost(self, costs):
        """
        :type costs: List[List[int]]
        :rtype: int
        """
        n = len(costs)
        f1 = [0] * n
        f2 = [0] * n
        f3 = [0] * n
        f1[0] = costs[0][0]
        f2[0] = costs[0][1]
        f3[0] = costs[0][2]
        for i in range(1, n):
            f1[i] = min(f2[i - 1] + costs[i][0], f3[i - 1] + costs[i][0])
            f2[i] = min(f1[i - 1] + costs[i][1], f3[i - 1] + costs[i][1])
            f3[i] = min(f2[i - 1] + costs[i][2], f1[i - 1] + costs[i][2])
        return min(f1[-1], f2[-1], f3[-1])


print(Solution().minCost([[17, 2, 17], [16, 16, 5], [14, 3, 19]]))
print(Solution().minCost([[7, 6, 2]]))
