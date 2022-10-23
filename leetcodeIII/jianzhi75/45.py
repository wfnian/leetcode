from functools import cmp_to_key


class Solution(object):
    def minNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: str
        """
        def cmp(a, b):
            if a + b == b + a:
                return 0
            if a + b > b + a:
                return True
            return -1

        nums = list(map(str, nums))
        nums.sort(key=cmp_to_key(cmp))
        return ''.join(nums)


print(Solution().minNumber([3, 30, 34, 5, 9]))
