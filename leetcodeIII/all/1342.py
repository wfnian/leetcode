class Solution:
    def numberOfSteps(self, num: int) -> int:
        cnt = 0
        while num != 0:
            cnt += 1
            if num % 2 == 0:
                num = num >> 1
                continue
            num = num - 1
        # print(cnt)
        return cnt


res = Solution().numberOfSteps(123)