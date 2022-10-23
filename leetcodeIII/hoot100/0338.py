from typing import List


class Solution:
    def countBits(self, n: int) -> List[int]:
        f = (n + 1) * [0]
        f[0] = 0
        for i in range(1, n + 1):
            if i % 2 == 0:
                f[i] = f[i // 2]
            else:
                f[i] = f[i - 1] + 1
        return f


print(Solution().countBits(5))
