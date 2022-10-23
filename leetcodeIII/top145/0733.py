class Solution(object):
    def floodFill(self, image, sr, sc, color):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type color: int
        :rtype: List[List[int]]
        """
        def dfs(image, sr, sc, color, old):
            if color == old:
                return
            if sr >= 0 and sr < len(image) and sc >= 0 and sc < len(image[0]) and image[sr][sc] == old:
                image[sr][sc] = color
                dfs(image, sr + 1, sc, color, old)
                dfs(image, sr - 1, sc, color, old)
                dfs(image, sr, sc + 1, color, old)
                dfs(image, sr, sc - 1, color, old)
            else:
                return

        old = image[sr][sc]
        if old == color:
            return image
        dfs(image, sr, sc, color, old)
        return image


print(Solution().floodFill([[0, 0, 0], [0, 0, 0]], 0, 0, 2))
