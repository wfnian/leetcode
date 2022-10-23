# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        d = {}
        while head:
            if head in d:
                return True
            else:
                d[head] = None
            head = head.next
        return False


class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        #= 快慢指针解法
        """
        if not head or not head.next:
            return False
        one = head
        two = head.next

        while True:
            if two == one:
                return True
            if not two or not two.next:
                return False
            one = one.next
            two = two.next.next


a = ListNode(3)
b = ListNode(3)
print(a == b)
print(a is b)
a.next = b
print(a.next == b)
print(a.next is b)