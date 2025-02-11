from typing import List


class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count = 0
        for num in nums:
            if self.is_cnt_even(num): 
                count+=1
        return count

    def is_cnt_even(self, num) -> bool:
        cnt = 0
        while num:
            num=num//10
            cnt += 1 
        return cnt & 1 == 0


print(Solution().findNumbers([12,345,2,6,7896]))
print(Solution().findNumbers([555,901,482,1771]))