class Solution(object):
    def minimumOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = 0
        while True:
            min_ = 200
            for num in nums:
                if num != 0 and num < min_:
                    min_ = num

            if min_ == 200:
                break
            else:
                for i in range(len(nums)):
                    if nums[i] != 0:
                        nums[i] -= min_
                res += 1

        return res 


print(Solution().minimumOperations([0]))
