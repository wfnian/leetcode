class MinStack(object):
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.stack = []
        self.min_ = []

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        self.stack.append(x)
        if self.min_:
            if self.min_[-1]<x:
                pass
            else:
                self.min_.append(x)
        else:
            self.min_.append(x)

    def pop(self):
        """
        :rtype: None
        """
        res = self.stack.pop()
        if self.min_  and res == self.min_[-1]:
            self.min_.pop()

    def top(self):
        """
        :rtype: int
        """
        return self.stack[-1]

    def min(self):
        """
        :rtype: int
        """
        return self.min_[-1]
