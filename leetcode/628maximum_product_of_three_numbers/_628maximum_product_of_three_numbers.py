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
class Solution(object):
    def maximumProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        a = sorted(nums)
        return max([a[0]*a[1]*a[-1],a[-1]*a[-2]*a[-3]])
a = Solution()
print(a.maximumProduct([-1,-2,3,4]))
#[0,1,2,3][-1,0,1,2]
