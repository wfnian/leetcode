class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n < 1:
            return False
        while n != 1:
            if n % 3 != 0: return False
            n = n // 3
        return True


print(Solution().isPowerOfThree(81))