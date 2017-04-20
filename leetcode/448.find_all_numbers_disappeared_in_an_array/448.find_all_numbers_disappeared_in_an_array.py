"""
448. Find All Numbers Disappeared in an Array
Given an array of integers where 1 ¡Ü a[i] ¡Ü n (n = size of array),
some elements appear twice and others appear once.
Find all the elements of [1, n] inclusive that do not appear in this array.
Could you do it without extra space and in O(n) runtime? You may 
assume the returned list does not count as extra space.
Example:
Input:
[4,3,2,7,8,2,3,1]
Output:
[5,6]
"""
class Solution(object):
    @staticmethod
    def findDisappearedNumbers(nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        return list(set(range(1, len(nums)+1))-set(nums))
a = Solution()
print(a.findDisappearedNumbers([4,3,2,7,8,2,3,1]))
print(a.findDisappearedNumbers([1, 1]))