""" 
70. 爬楼梯
假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

f[0]=0
f[1]=1
f[2]=2
f[3]=f[3-1]+f[3-2]=f[2]+f[1]
"""


class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1:
            return 1
        f = (n + 1) * [50]
        f[0] = 0
        f[1] = 1
        f[2] = 2
        for i in range(3, n + 1):
            f[i] = f[i - 1] + f[i - 2]
        return f[n]


print(Solution().climbStairs(45))
