class Solution(object):
    def trap(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        max_index = 0
        max_ = height[0]
        for i in range(1, len(height)):
            if height[i] > max_:
                max_ = height
                max_index = i
        area = 0
        tmp = height[0]
        for i in range(1, max_index):
            if height[i] > tmp:
                tmp = height[i]
            else:
                area += tmp - height[i]
        tmp = height[-1]
        for i in range(len(height) - 1, max_index, -1):
            if height[i] > tmp:
                tmp = height[i]
            else:
                area += tmp - height[i]
        return area