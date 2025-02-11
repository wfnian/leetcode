class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        rev = ListNode()
        while head:
            tmp = head.next
            head.next = rev.next
            rev.next = head
            head = tmp

        return rev.next


def create(arr):
    head = node = ListNode()
    for i in arr:
        tmp = ListNode(i)
        node.next = tmp
        node = tmp

    return head.next


def printL(head):
    node = head
    while node:
        print(node.val, end=' ')
        node = node.next


L1 = create([1])
printL(Solution().reverseList(L1))
