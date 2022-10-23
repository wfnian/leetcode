class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        d = dict()
        res = 0
        for num in nums:
            if num in d:
                continue
            left = d.get(num - 1, 0)
            right = d.get(num + 1, 0)
            tmp = left + 1 + right
            d[num] = tmp
            res = max(res, tmp)
            d[num - left] = tmp
            d[num + right] = tmp
        # print(d)
        return res


print(Solution().longestConsecutive([100, 4, 200, 1, 3, 2]))
