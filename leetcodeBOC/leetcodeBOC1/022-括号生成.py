from typing import List


class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []

        def trace(n, path, l, r):
            if len(path) == n*2:
                res.append(path)
                return
            if l < n:
                path += '('
                trace(n, path, l+1, r)
                path = path[:-1]

            if r < l:
                path += ')'
                trace(n, path, l, r + 1)
                path = path[:-1]

        trace(n, '', 0, 0)
        return res


Solution().generateParenthesis(3)
