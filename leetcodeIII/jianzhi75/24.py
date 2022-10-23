class ListNode(object):
    def __init__(self, x=0, next=None):
        self.val = x
        self.next = next


class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        front = node = ListNode()
        while head:
            tmp = head.next
            head.next = front.next
            front.next = head
            head = tmp
        return front.next


print(Solution().reverseList(ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))))
