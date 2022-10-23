class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        d = {}
        for i in nums:
            if i in d:
                d[i] += 1
            else:
                d[i] = 1
        d = sorted(d.items(), key=lambda val: val[1], reverse=True)
        res = []
        for i in range(k):
            res.append(d[i][0])
        return res


print(Solution().topKFrequent([1], 1))
