"""
Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
"""
class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
		
        for i in nums:
            if nums.count(i) >=2: return True
        return False
        """
        return len(set(nums)) != len(nums)
a = Solution()
print(a.containsDuplicate([-24500,-24499]))