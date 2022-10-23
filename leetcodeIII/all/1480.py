class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res = []
        sum = 0
        for val in nums:
            sum += val
            res.append(sum)
        return res


res = Solution().runningSum([1, 2, 3, 4])
print(res)
