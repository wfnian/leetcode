class Solution(object):
    def validSquare(self, p1, p2, p3, p4):
        """
        :type p1: List[int]
        :type p2: List[int]
        :type p3: List[int]
        :type p4: List[int]
        :rtype: bool
        """
        def dis(p1, p2):
            return ((p1[1] - p2[1])**2 + (p1[0] - p2[0])**2)

        res = [dis(p1, p2), dis(p1, p3), dis(p1, p4), dis(p2, p3), dis(p2, p4), dis(p3, p4)]
        if len(set(res)) != 2: return False
        res.sort()
        if (res[0]) << 1 != res[-1]: return False
        return True


print(Solution().validSquare(p1=[0, 0], p2=[1, 1], p3=[1, 0], p4=[0, 1]))
print(Solution().validSquare(p1=[0, 0], p2=[1, 1], p3=[1, 0], p4=[0, 12]))
print(Solution().validSquare(p1=[1, 0], p2=[-1, 0], p3=[0, 1], p4=[0, -1]))
