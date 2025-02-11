class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        num = [0] * (len(nums1) + len(nums2))
        i = j = 0
        k = 0
        while i < len(nums1) and j < len(nums2):
            if nums1[i] < nums2[j]:
                num[k] = nums1[i]
                i += 1
                k += 1
            else:
                num[k] = nums2[j]
                j += 1
                k += 1
        while i < len(nums1):
            num[k] = nums1[i]
            i += 1
            k += 1
        while j < len(nums2):
            num[k] = nums2[j]
            j += 1
            k += 1
        if not len(num):
            return 0
        if len(num) & 1:
            return num[len(num)//2]
        return (num[len(num)//2]+num[len(num)//2-1])/2


print(Solution().findMedianSortedArrays([1, 2], [3, 4]))
# print(Solution().findMedianSortedArrays([], []))
print(Solution().findMedianSortedArrays([1, 3], [2]))
