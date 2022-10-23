class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        i, j = 0, 0
        n = len(nums1) + len(nums2)
        res = []
        while i < len(nums1) and j < len(nums2):
            if (nums1[i] < nums2[j]):
                res.append(nums1[i])
                i += 1
            else:
                res.append(nums2[j])
                j += 1
        while i < len(nums1):
            res.append(nums1[i])
            i += 1
        while j < len(nums2):
            res.append(nums2[j])
            j += 1
        if n % 2 != 0:
            return res[n // 2]
        else:
            return (res[n // 2 - 1] + res[n // 2]) / 2


# res = Solution().findMedianSortedArrays([1, 2], [-1, 3])
res = Solution().findMedianSortedArrays([1, 3, 4, 9], [2])
print(res)
res = Solution().findMedianSortedArrays([], [1])
print(res)
