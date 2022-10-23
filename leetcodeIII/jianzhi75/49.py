import heapq


class Solution(object):
    def nthUglyNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        m = [2, 3, 5]
        res = {1}
        heap = [1]
        for i in range(n - 1):
            tmp = heapq.heappop(heap)
            for e in m:
                if tmp * e not in res:
                    res.add(tmp * e)
                    heapq.heappush(heap, tmp * e)
        return heap[0]


print(Solution().nthUglyNumber(10))
