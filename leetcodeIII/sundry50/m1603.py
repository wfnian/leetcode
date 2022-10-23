class Solution(object):
    def intersection(self, start1, end1, start2, end2):
        """
        :type start1: List[int]x1,y1
        :type end1: List[int]x2,y2
        :type start2: List[int]
        :type end2: List[int]
        :rtype: List[float]
        """
        # if max(start1[0],end1[0]) < min(start2[0]X)
        a = (end1[1] - start1[1]) / (end1[0] - start1[0] + 1e-9)
        b = start1[1] - a * start1[0]
        a1 = (end2[1] - start2[1]) / (end2[0] - start2[0] + 1e-9)
        b1 = start2[1] - a1 * start2[0]
        # print(a, a1)
        # print(b, b1)

        if a == a1:
            if b1 == b:
                return [max(start1[0], start2[0]), max(start1[1], start2[1])]
            return []
        return [(b1 - b) / (a - a1), b + a * (b1 - b) / (a - a1)]


print(Solution().intersection([0, 0], [3, 3], [1, 1], [2, 2]))
print(Solution().intersection([0, 0], [1, 0], [1, 1], [0, -1]))
print(Solution().intersection([0, 0], [1, 1], [1, 0], [2, 1]))
