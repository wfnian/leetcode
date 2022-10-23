class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        return self.binarySearch(nums, 0, len(nums) - 1, target)

    def binSearch(self, arr, left, right, target):
        mid = (left + right) // 2
        if left > right:
            return -1
        if arr[mid] == target:
            return mid
        if arr[mid] < target:
            return self.binSearch(arr, mid + 1, right, target)
        if arr[mid] > target:
            return self.binSearch(arr, left, mid - 1, target)

    def binarySearch(self, arr, left, right, target):

        while left < right:
            mid = (left + right) // 2
            if arr[mid] == target:
                return mid
            if arr[mid] > target:
                right = mid - 1
            if arr[mid] < target:
                left = mid + 1

        return left if arr[left] >= target else left + 1


# print(Solution().binSearch([1, 2, 3, 4, 5, 6], 0, 5, 44))
# print(Solution().binarySearch([1, 2, 3, 4, 5, 6], 0, 5, 44))
print(Solution().searchInsert([1], 1))
