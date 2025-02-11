from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        head = node = ListNode()

        while list1 and list2:
            if list1.val < list2.val:
                temp = list1
                node.next = temp
                node = temp
                list1 = list1.next
            else:
                temp = list2
                node.next = temp
                node = temp
                list2 = list2.next
        if list1:
            node.next = list1
        if list2:
            node.next = list2

        printl(head.next)

        return head.next


def create(nums):
    head = node = ListNode()

    for i in nums:
        temp = ListNode(i)
        node.next = temp
        node = temp
    return head.next


def printl(head):
    temp = head
    while temp:
        print(temp.val, end='->')
        temp = temp.next
    print()


Solution().mergeTwoLists(create([1, 2, 4]), create([1, 3, 4]))
Solution().mergeTwoLists(create([1]), create([]))
