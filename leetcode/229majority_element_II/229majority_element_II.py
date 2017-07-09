class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        array = list(set(nums))
        List = []
        for i in array:
            if(nums.count(i)>len(nums)//3):
                List.append(i)
        return List