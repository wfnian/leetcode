class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """

        d = {
            '}': '{',
            ')': '(',
            ']': '['
        }
        stack = []
        for i in range(len(s)):
            if s[i] in d and stack and stack[-1] == d[s[i]]:
                stack.pop()
            else:
                stack.append(s[i])
        return len(stack) == 0


print(Solution().isValid("()[]{}"))
print(Solution().isValid("(]"))
print(Solution().isValid("]"))
