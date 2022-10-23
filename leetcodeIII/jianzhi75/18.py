class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution(object):
    def deleteNode(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        node = head
        while node:
            if node.next.val == val:
                if node.next.next:
                    node.next = node.next.next
                else:
                    node.next = None
                break
            node = node.next
        return head