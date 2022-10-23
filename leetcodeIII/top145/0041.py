class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        d = set()
        for i in nums:
            if i > 0 and i <= len(nums):
                d.add(i)
        for i in range(1, len(nums) + 1):
            if i not in d:
                return i
        return i + 1


print(Solution().firstMissingPositive([1]))
# print(Solution().firstMissingPositive([3, 4, -1, 1]))
# print(Solution().firstMissingPositive([7, 8, 9, 11, 12]))
