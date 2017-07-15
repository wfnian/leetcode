"""//////////////////////////////////////////////////////////////
Given an array of integers and an integer k, you need to find the 
number of unique k-diff pairs in the array. Here a k-diff pair is
defined as an integer pair (i, j), where i and j are both numbers
in the array and their absolute difference is k.

Input:[1, 2, 3, 4, 5], k = 1
Output: 4
Explanation:There are four 1-diff pairs in the array,(1,2),(2,3),(3,4),(4,5).
//////////////////////////////////////////////////////////////"""
class Solution(object):
    def findPairs(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        if k<0:
            return 0
        ans = 0
        if k==0:
            
            if len(nums)-len(set(nums))==0:
                return 0
            for i in set(nums):
                if nums.count(i)>1:
                    ans+=1
            return ans
        newNum = list(set(nums))
        newNum = sorted(newNum)
        for i in range(len(newNum)):
            if newNum[i]+k in newNum[i:]:
                ans+=1
        return ans
a = Solution()
#a.findPairs([3,1,4,1,5],2)
#a.findPairs([1, 2, 3, 4, 5],1)
#print(a.findPairs([1, 3, 1, 5, 4],0))
#a.findPairs([1,1,1,1,1],0)
print(a.findPairs([-1,-2,-3],1))