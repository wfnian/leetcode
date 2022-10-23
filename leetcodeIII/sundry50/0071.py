class Solution(object):
    def simplifyPath(self, path):
        """
        :type path: str
        :rtype: str
        """
        res = path.split('/')
        stack = []
        for i in res:
            if not i or i == '.': continue
            elif i == '..':
                if stack:
                    stack.pop()
                continue
            else:
                stack.append(i)
        return '/' + '/'.join(stack)


print(Solution().simplifyPath("/a/./b/../../c/"))
print(Solution().simplifyPath("/home//foo/"))
print(Solution().simplifyPath("/../"))