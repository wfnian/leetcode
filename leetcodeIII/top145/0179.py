from functools import cmp_to_key


class Solution(object):
    def largestNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: str
        """
        def compare(a, b):
            return int(b + a) - int(a + b)

        nums = sorted(map(str, nums), key=cmp_to_key(compare))
        return "0" if nums[0] == '0' else ''.join(nums)


print(Solution().largestNumber([3, 30, 34, 5, 9]))
