class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        for i in range(n):
            j = m + i - 1
            while j >= 0 and nums1[j] > nums2[i]:
                nums1[j + 1] = nums1[j]
                j -= 1
            nums1[j + 1] = nums2[i]
        return nums1


print(Solution().merge([1, 2, 3, 4, 0, 0, 0], 4, [3, 5, 6], 3))
print(Solution().merge([1], 1, [], 0))
