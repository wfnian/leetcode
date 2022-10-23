# class Solution(object):
#     def fourSumCount(self, nums1, nums2, nums3, nums4):
#         """
#         :type nums1: List[int]
#         :type nums2: List[int]
#         :type nums3: List[int]
#         :type nums4: List[int]
#         :rtype: int
#         """
#         self.res = []
#         self.count = 0

#         def trace(nums1, nums2, nums3, nums4, target, i1, i2, i3, i4, n):
#             if i1 < n and i2 < n and i3 < n and i4 < n and nums1[i1] + nums2[i2] + nums3[i3] + nums4[i4] == target:

#                 self.res.append([i1, i2, i3, i4])
#                 self.count += 1
#                 return
#             else:
#                 if i1 < n and i2 < n and i3 < n and i4 < n:
#                     trace(nums1, nums2, nums3, nums4, target, i1 + 1, i2, i3, i4, n)
#                     trace(nums1, nums2, nums3, nums4, target, i1, i2 + 1, i3, i4, n)
#                     trace(nums1, nums2, nums3, nums4, target, i1, i2, i3 + 1, i4, n)
#                     trace(nums1, nums2, nums3, nums4, target, i1, i2, i3, i4 + 1, n)


#         trace(nums1, nums2, nums3, nums4, 0, 0, 0, 0, 0, len(nums1))
#         return self.count
class Solution(object):
    def fourSumCount(self, nums1, nums2, nums3, nums4):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :type nums3: List[int]
        :type nums4: List[int]
        :rtype: int
        """
        d = dict()

        n = len(nums1)
        for i in range(n):
            for j in range(n):
                tmp = nums1[i] + nums2[j]
                if tmp in d:
                    d[tmp] += 1
                else:
                    d[tmp] = 1
        res = 0
        for i in range(n):
            for j in range(n):
                tmp = nums3[i] + nums4[j]
                if -tmp in d:
                    res += d[-tmp]
        return res


print(Solution().fourSumCount([0, 1, -1], [-1, 1, 0], [0, 0, 1], [-1, 1, 1]))
