import numpy as np
class Solution(object):
    def maxSlidingWindow(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        nums = np.array(nums,dtype=int) 
        res = np.zeros(len(nums) - k + 1,dtype=int)#[0] * (len(nums) - k + 1)
        for i in range(len(nums) - k + 1):
            res[i] = np.max(nums[i:i + k])
        return res.tolist()


Solution().maxSlidingWindow()
