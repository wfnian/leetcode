from typing import List


class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        left, right = -1, -1
        i, j = 0, len(nums)-1
        while i <= j:
            mid = (i+j)//2
            if nums[mid] == target:
                left, right = mid, mid
                break
            if nums[mid] > target:
                j = mid-1
            else:
                i = mid+1
        if left == right == -1:
            return [-1, -1]
        while left >= 0:
            if nums[left] == target:
                left -= 1
            else:
                break
        while right < len(nums):
            if nums[right] == target:
                right += 1
            else:
                break
        return [left+1, right-1]


print(Solution().searchRange([5, 7, 7, 8, 8, 10], 8))
print(Solution().searchRange([1], 1))
print(Solution().searchRange([], 6))
