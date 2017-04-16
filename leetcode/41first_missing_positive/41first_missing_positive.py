class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums = list(set(nums))
        a = []
        for i in nums:
            if i>0:
                a.append(i)
        lent = len(a)
        if lent == 0:
            return 1
        if lent == 1:
            if a[0] == 1:
                return 2
            return 1
        a.sort()
        for i in range(0,len(a)):
            if (i+1)!= a[i]:
                return i+1
        return a[-1]+1