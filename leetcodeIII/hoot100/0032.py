class Solution(object):
    def longestValidParentheses(self, s):
        """
        :type s: str
        :rtype: int
        """
        stack = []
        res = len(s) * [1]
        for i in range(len(s)):
            if s[i] == '(':
                stack.append(i)
            elif s[i] == ')' and stack:
                res[i] = 0
                res[stack[-1]] = 0
                stack.pop()
        max_ = 0
        cnt = 0
        for i in res:
            if i == 0:
                cnt += 1
                max_ = max(max_, cnt)
            else:
                cnt = 0
        return max_


print(Solution().longestValidParentheses('()(()'))