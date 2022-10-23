class Solution(object):
    def findRepeatNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s = set()
        for num in nums:
            if num in s:
                return num
            s.add(num)
        return 0