from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None) -> None:
        self.val = val
        self.next = next


class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode()
        node = ListNode()
        head = node
        extra = 0
        while l1 and l2:
            temp = ListNode((l1.val + l2.val + extra) % 10)
            extra = (l1.val + l2.val + extra) // 10
            node.next = temp
            node = temp
            l1 = l1.next
            l2 = l2.next
        rest = l2 if l2 else l1
        while rest:
            temp = ListNode((rest.val + extra) % 10)
            extra = (rest.val + extra) // 10
            node.next = temp
            node = temp
            rest = rest.next
        if extra:
            temp = ListNode(extra)
            node.next = temp
            node = temp
        return head.next


def create(nums):
    head = ListNode()
    node = ListNode()
    head = node
    for num in nums:
        temp = ListNode(num)
        node.next = temp
        node = temp

    return head.next


def printL(linklist):
    temp = linklist
    while temp:
        print(temp.val, end="->")
        temp = temp.next
    print()


L1 = create([9, 9])
L2 = create([1])
printL(L1)
printL(L2)

printL(Solution().addTwoNumbers(L1, L2))
