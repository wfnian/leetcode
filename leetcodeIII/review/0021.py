class ListNode():
    def __init__(self, val=0, next=None) -> None:
        self.val = val
        self.next = next


class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        head = node = ListNode()
        while list1 and list2:
            if list1.val < list2.val:
                tmp = ListNode(list1.val)
                node.next = tmp
                node = tmp
                list1 = list1.next
            else:
                tmp = ListNode(list2.val)
                node.next = tmp
                node = tmp
                list2 = list2.next
        while list1:
            tmp = ListNode(list1.val)
            node.next = tmp
            node = tmp
            list1 = list1.next
        while list2:
            tmp = ListNode(list2.val)
            node.next = tmp
            node = tmp
            list2 = list2.next

        return head.next


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


L1 = create([1, 2, 4])
L2 = create([1,  3, 4])
# printL(L)
printL(Solution().mergeTwoLists(L1, L2))
