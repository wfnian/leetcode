class MyQueue:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.queue = []

    def push(self, x):
        """
        Push element x to the back of queue.
        :type x: int
        :rtype: void
        """
        self.queue.append(x)

    def pop(self):
        """
        Removes the element from in front of queue and returns that element.
        :rtype: int
        """
        ans = self.queue[0]
        self.queue = self.queue[1:]
        return ans

    def peek(self):
        """
        Get the front element.
        :rtype: int
        """
        ans = self.queue[0]
        #self.queue = self.queue[1:]
        return ans

    def empty(self):
        """
        Returns whether the queue is empty.
        :rtype: bool
        """
        return len(self.queue) == 0


