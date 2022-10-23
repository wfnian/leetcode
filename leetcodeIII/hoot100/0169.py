class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        major = nums[0]
        count = 1
        for i in range(1, len(nums)):
            if major == nums[i]:
                count += 1
            else:
                count -= 1
                if count <= 0:
                    major = nums[i]
                    count = 1
        return major


print(Solution().majorityElement([2, 2, 1, 1, 1, 2, 2]))
print(Solution().majorityElement([1, 3, 1, 1, 4, 1, 1, 5, 1, 1, 6, 2, 2]))
