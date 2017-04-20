"""
Given an array of integers, 1 ¡Ü a[i] ¡Ü n (n = size of array),
some elements appear twice and others appear once.
Find all the elements that appear twice in this array.
Could you do it without extra space and in O(n) runtime?
"""
class Solution(object):
    @staticmethod
    def findDuplicates(nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        new = []
        nums.sort()
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                new.append(nums[i])
        return new