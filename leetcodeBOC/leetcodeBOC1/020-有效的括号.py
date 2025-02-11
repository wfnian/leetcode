class Solution:
    def isValid(self, s: str) -> bool:

        stack = []
        d = {
            '{': '}',
            '(': ')',
            '[': ']'
        }
        for i in s:
            if stack and stack[-1] in d and i == d[stack[-1]]:
                stack.pop()
            else:
                stack.append(i)
        return not stack


print(Solution().isValid('()'))
print(Solution().isValid('()[]{}'))
print(Solution().isValid('(]'))
