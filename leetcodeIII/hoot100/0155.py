class MinStack(object):
    def __init__(self):
        self.stack = []
        self.minStack = []

    def push(self, val):
        """
        :type val: int
        :rtype: None
        """
        if not self.minStack or self.minStack[-1] > val:
            self.minStack.append(val)
        self.stack.append(val)

    def pop(self):
        """
        :rtype: None
        """
        tmp = self.stack.pop()
        if tmp == self.minStack[-1]:
            self.minStack.pop()

    def top(self):
        """
        :rtype: int
        """
        return self.stack[-1]

    def getMin(self):
        """
        :rtype: int
        """
        return self.minStack[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()