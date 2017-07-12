"""
628. Maximum Product of Three Numbers My SubmissionsBack to Contest
Given an integer array, find three numbers whose product
is maximum and output the maximum product.
Example 1:
Input: [1,2,3]
Output: 6
Example 2:
Input: [1,2,3,4]
Output: 24

//要考虑负数情况！！！
"""
class Solution:
    def maximumProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()#[-5, -4, -3, 1, 2, 6, 7]
        return max(nums[-1] * nums[-2] * nums[-3], nums[0] * nums[1] * nums[-1])
#a = Solution()
#a.maximumProduct([1,2,-3,-4,-5,6,7])
