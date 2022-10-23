class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        d = dict()
        res = []
        for num in nums1:
            if num in d:
                d[num] += 1
            else:
                d[num] = 1
        for num in nums2:
            if num in d and d[num] >= 1:
                res.append(num)
                d[num] -= 1
        return res


print(Solution().intersect([1, 2, 2, 1], [2, 2]))
print(Solution().intersect([4, 9, 5], [9, 4, 9, 8, 4]))
