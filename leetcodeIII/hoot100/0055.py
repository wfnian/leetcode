from typing import List
""" 
55. 跳跃游戏
给定一个非负整数数组 nums ，你最初位于数组的 第一个下标 。
数组中的每个元素代表你在该位置可以跳跃的最大长度。
判断你是否能够到达最后一个下标。

f[0] = True

"""


class Solution:
    def canJump(self, nums: List[int]) -> bool:

        maxDis = 0
        for i, val in enumerate(nums):
            if maxDis >= i and i + val > maxDis:
                maxDis = i + val
        return maxDis >= i


class SolutionDp:
    def canJump(self, nums: List[int]) -> bool:
        n = len(nums)
        f = n * [False]
        f[0] = True

        for i in range(1, n):
            for j in range(i):
                if nums[j] + j >= i and f[j] == True:
                    f[i] = True
                    break
        return f[-1]


print(Solution().canJump([4, 3, 2, 6, 4, 1, 1, 1, 5, 1, 5, 1, 2, 4, 1, 4, 6, 4, 2, 5, 2, 2, 6, 4]))
print(Solution().canJump([3, 2, 1, 0, 4]))
