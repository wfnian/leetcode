from typing import List


class Solution1:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res = [0] * len(temperatures)
        for i in range(1, len(temperatures)):
            for j in range(0, i):
                if (res[j] == 0 and temperatures[i] > temperatures[j]):
                    res[j] = i - j
                    # continue
        print(res)
        return res


class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res = [0] * len(temperatures)
        stack = []
        for i in range(len(temperatures)):
            while len(stack) != 0 and temperatures[i] > temperatures[stack[-1]]:
                tmp = stack.pop()
                res[tmp] = i - tmp
            stack.append(i)
        print(res)
        return res


res = Solution().dailyTemperatures([30, 40, 50, 60])
res = Solution().dailyTemperatures([73, 74, 75, 71, 69, 72, 76, 73])
