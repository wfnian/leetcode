class CQueue(object):
    def __init__(self):
        self.stack1 = []
        self.stack2 = []

    def appendTail(self, value):
        """
        :type value: int
        :rtype: None
        """
        self.stack1.append(value)

    def deleteHead(self):
        """
        :rtype: int
        """
        if not self.stack1 and not self.stack2:
            return -1
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        return self.stack2.pop()


s = CQueue()
s.appendTail(1)
s.appendTail(2)
s.appendTail(3)
print(s.deleteHead())
print(s.deleteHead())
s.appendTail(5)
print(s.deleteHead())