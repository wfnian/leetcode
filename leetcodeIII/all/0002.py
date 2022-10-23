from typing import List, Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        extra = 0

        head = ListNode()
        node = head

        while (l1 and l2):
            tmp = ListNode((l1.val + l2.val + extra) % 10)
            extra = (l1.val + l2.val + extra) // 10
            node.next = tmp
            node = tmp
            l1 = l1.next
            l2 = l2.next
        while (l1):
            tmp = ListNode((l1.val + extra) % 10)
            extra = (l1.val + extra) // 10
            node.next = tmp
            node = tmp
            l1 = l1.next
        while (l2):
            tmp = ListNode((l2.val + extra) % 10)
            extra = (l2.val + extra) // 10
            node.next = tmp
            node = tmp
            l2 = l2.next
        if extra:
            tmp = ListNode(extra)
            node.next = tmp
            node = tmp

        return head.next


def create(arr: List):
    ll = ListNode(0, None)
    tmp = ll
    for elem in arr:
        node = ListNode(elem, None)
        tmp.next = node
        tmp = node
    return ll.next


def printlist(listnode):
    tmp = listnode
    while tmp != None:
        print(tmp.val, end=' ')
        tmp = tmp.next
    print()


l1 = create([9, 9, 9, 9, 9, 9, 9])
l2 = create([9, 9, 9, 9])
res = Solution().addTwoNumbers(l1, l2)
printlist(res)
