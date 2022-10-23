from typing import List
""" 

322. 零钱兑换
给你一个整数数组 coins ，表示不同面额的硬币；以及一个整数 amount ，表示总金额。
计算并返回可以凑成总金额所需的 最少的硬币个数 。如果没有任何一种硬币组合能组成总金额，返回 -1 。
你可以认为每种硬币的数量是无限的。

确定状态转移方程: f[x] = min(f[amout-conins1],f[amout-coins2],...f[amout-conis_n])
f[0]=0
f[1]=min(f[1-2]+1,f[1-5]+1,f[1-7]+1)=min(max,max,max)
f[2]=min(f[2-2]+1,f[2-5]+1,f[2-7]+1)=min(1,max,max)
f[3]=min(f[3-2]+1,f[3-5]+1,f[3-7]+1)=min(1,max,max)
"""


class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        f = (amount + 1) * [10001]
        f[0] = 0
        for i in range(1, amount + 1):
            for coin in coins:
                if i >= coin and f[i - coin] != 10001:  #! important!!!
                    f[i] = min(f[i - coin] + 1, f[i])
        if f[amount] == 10001:
            f[amount] = -1
        return f[amount]


class Solution2:
    def coinChange(self, coins, amount):
        f = [999999] * (amount + 1)
        f[0] = 0
        for i in range(1, amount + 1):
            for coin in coins:
                if i >= coin and f[i - coin] != 999999:
                    f[i] = min(f[i], f[i - coin] + 1)
        return -1 if f[-1] == 999999 else f[-1]


print(Solution().coinChange([2, 5, 7], 27))
print(Solution2().coinChange([2, 5, 7], 27))
