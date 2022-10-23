class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """

        self.res = []

        def trace(n, path, left, right):
            if left + right == n << 1:
                self.res.append(path)
                return
            if left < n:
                path += '('
                trace(n, path, left + 1, right)
                path = path[:-1]
            if right < left:
                path += ')'
                trace(n, path, left, right + 1)
                path = path[:-1]

        trace(n, "", 0, 0)
        return self.res


print(Solution().generateParenthesis(3))