class Solution(object):
    def validateStackSequences(self, pushed, popped):
        """
        :type pushed: List[int]
        :type popped: List[int]
        :rtype: bool
        """
        i, j = 0, 0
        stack = []
        while i < len(pushed) and j < len(popped):
            while i < len(pushed) and j < len(popped) and pushed[i] != popped[j]:
                stack.append(pushed[i])
                i += 1
            while i < len(pushed) and j < len(popped) and pushed[i] == popped[j]:
                i += 1
                j += 1
            while stack and stack[-1] == popped[j]:
                j += 1
                stack.pop()
            if j == len(popped):
                return True
        if stack == [] or j == len(popped):
            return True
        return False


print(Solution().validateStackSequences([1, 2, 3, 4, 5], [4, 5, 3, 2, 1]))
print(Solution().validateStackSequences([1, 2, 3, 4, 5], [4, 3, 5, 1, 2]))
print(Solution().validateStackSequences([1, 2, 3, 4, 5], [4, 3, 1, 5, 2]))
print(Solution().validateStackSequences([4, 0, 1, 2, 3], [4, 2, 3, 0, 1]))
