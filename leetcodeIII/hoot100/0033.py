class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        def bsearch(num, l, r, tar):
            i = l
            j = r
            while (i <= j):
                mid = (i + j) // 2
                if num[mid] == tar:
                    return mid
                if num[mid] > tar:
                    j = mid - 1
                else:
                    i = mid + 1
            return -1

        i = 0
        j = len(nums) - 1

        while i < j:
            mid = (i + j) // 2
            if nums[mid] == target:
                return mid

            if nums[mid] > nums[j]:
                if nums[i] == target:
                    return i
                i = mid + 1
            else:
                if nums[j] == target:
                    return j
                j = mid - 1
        # print(i, j)
        if nums[i] == target:
            return i
        elif i - 1 >= 0:
            if nums[i - 1] > nums[i]:
                peak = i - 1
            else:
                peak = i
        else:
            return bsearch(nums, 0, len(nums) - 1, target)

        if nums[peak] >= target and nums[0] <= target:
            res = bsearch(nums, 0, peak, target)
        else:
            res = bsearch(nums, peak + 1, len(nums) - 1, target)

        return res


print(Solution().search([4, 5, 6, 7, 0, 1, 2], 0))
print(Solution().search([3, 4, 5, 6, 7, 8, 0, 1, 2], 0))
print(Solution().search([6, 7, 8, 0, 1, 2, 3, 4, 5], 0))
print(Solution().search([3, 1], 2))
print(Solution().search([1, 3], 3))
print(Solution().search([8, 9, 2, 3, 4], 9))
