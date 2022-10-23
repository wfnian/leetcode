class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        res = x ^ y
        cnt = 0
        while res:
            cnt += res & 1
            res >>= 1
        # print(cnt)
        return cnt


res = Solution().hammingDistance(1, 4)
