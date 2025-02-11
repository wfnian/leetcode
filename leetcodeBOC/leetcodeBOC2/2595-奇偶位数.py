from typing import List


class Solution:
    def evenOddBit(self, n: int) -> List[int]:
        cnt = 0
        a, b = 0, 0
        while n:
            if cnt % 2 == 0:
                a += n & 1
            else:
                b += n & 1
            n = n >> 1
            cnt += 1
        return [a, b]


print(Solution().evenOddBit(17))
print(Solution().evenOddBit(2))
print(Solution().evenOddBit(50)) 