class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for item in s:
            if item in ['{', '[', '(']:
                stack.append(item)
            elif stack:
                if item == ']' and stack[-1] == '[':
                    stack.pop()
                elif item == '}' and stack[-1] == '{':
                    stack.pop()
                elif item == ')' and stack[-1] == '(':
                    stack.pop()
                else:
                    return False
            else:
                return False

        return not stack


print(Solution().isValid('()[]{}'))
print(Solution().isValid("([)]"))
print(Solution().isValid("{[]}"))
print(Solution().isValid("{"))
print(Solution().isValid("}"))
print(Solution().isValid("(])"))