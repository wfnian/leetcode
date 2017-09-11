"""////////////////////////////////////////////////////////////
Given an array with n integers, your task is to check if 
it could become non-decreasing by modifying at most 1 element.
We define an array is non-decreasing if array[i] <= array[i + 1]
holds for every i (1 <= i < n).
////////////////////////////////////////////////////////////"""

#  Note : modifying no swap.

class Solution(object):
    def checkPossibility(self, nums):
        one, two = nums[:], nums[:]
        for i in range(len(nums) - 1):
            if nums[i] > nums[i + 1]:
                one[i] = nums[i + 1]
                two[i + 1] = nums[i]
                break
        return one == sorted(one) or two == sorted(two)
a = Solution()
print(a.checkPossibility([4,2,3]))   #测试用例1
print(a.checkPossibility([4,2,1]))   #测试用例1

