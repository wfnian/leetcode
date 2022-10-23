class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        head = node = ListNode()
        extra = 0
        while l1 and l2:
            tmp = ListNode((l1.val + l2.val + extra) % 10)
            extra = (l1.val + l2.val + extra) // 10
            node.next = tmp
            node = tmp
            l1 = l1.next
            l2 = l2.next
        while l1:
            tmp = ListNode((l1.val + extra) % 10)
            extra = (l1.val + extra) // 10
            node.next = tmp
            node = tmp
            l1 = l1.next
        while l2:
            tmp = ListNode((l2.val + extra) % 10)
            extra = (l2.val + extra) // 10
            node.next = tmp
            node = tmp
            l2 = l2.next
        if extra:
            tmp = ListNode(1)
            node.next = tmp
        tmp = head.next
        while tmp:
            print(tmp.val, end=' ')
            tmp = tmp.next
        print()
        return head.next


def create(arr):
    head = node = ListNode()
    for item in arr:
        tmp = ListNode(item)
        node.next = tmp
        node = tmp
    tmp = head.next
    while tmp:
        print(tmp.val, end=' ')
        tmp = tmp.next
    print()

    return head.next


Solution().addTwoNumbers(create([1]), create([9]))
