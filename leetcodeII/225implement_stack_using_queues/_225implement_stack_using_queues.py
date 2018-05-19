class MyStack:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.array = []

    def push(self, x):
        """
        Push element x onto stack.
        :type x: int
        :rtype: void
        """
        self.array.append(x)

    def pop(self):
        """
        Removes the element on top of the stack and returns that element.
        :rtype: int
        """
        ans = self.array[-1]
        self.array.pop()
        return ans

    def top(self):
        """
        Get the top element.
        :rtype: int
        """
        return self.array[-1]

    def empty(self):
        """
        Returns whether the stack is empty.
        :rtype: bool
        """
        return len(self.array) == 0


# Your MyStack object will be instantiated and called as such:
if __name__ == '__main__':
    obj=MyStack()
    print(obj.push(1))
    print(obj.push(2))
    print(obj.top())
    #print(obj.empty())


