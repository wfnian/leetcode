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
        node = ListNode()
        while head:
            tmp = ListNode(head.val)
            tmp.next = node.next
            node.next = tmp
            head = head.next
        tmp = node.next
        while tmp:
            print(tmp.val)
            tmp = tmp.next
        return node.next


def create(arr):
    head = node = ListNode()

    for val in arr:
        tmp = ListNode(val)
        node.next = tmp
        node = tmp

    tmp = head.next
    while tmp:
        print(tmp.val, end=' ')
        tmp = tmp.next
    print()

    return head.next


print(Solution().reverseList(create([1])))
