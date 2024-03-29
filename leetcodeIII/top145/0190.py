class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        res = 0
        for i in range(32):
            res += n & 1
            res = res << 1
            n = n >> 1
        return res


print(Solution().reverseBits(32))