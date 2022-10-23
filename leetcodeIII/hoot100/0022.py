class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        res = []

        def dfs(path):
            if len(path) == n * 2:
                res.append(path[:])
                return
            if path.count('(') < n and path.count(')') < n:
                dfs(path + '(')
            if (len(path) != 0) and path.count('(') > path.count(')'):
                dfs(path + ')')

        dfs('')
        return res


class Solution1(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        res = []

        def trace(path, l, r):
            if len(path) == n * 2:
                res.append(path)
                return
            if l < n:
                path += '('
                trace(path, l + 1, r)
                path = path[:-1]
            if r < l:
                path += ')'
                trace(path, l, r + 1)
                path = path[:-1]

        trace('', 0, 0)
        return res


print(Solution1().generateParenthesis(2))
print(Solution1().generateParenthesis(3))