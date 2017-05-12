"""
Given two arrays, write a function to compute their intersection.
Example:
Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].
"""

class Solution(object):
    def intersect(self, nums1, nums2):
        nums = list(set(nums1)&set(nums2))
        inter = []
        for i in nums:
            a = min(nums1.count(i),nums2.count(i))
            for j in range(a):
                inter.append(i)
        return (inter)
