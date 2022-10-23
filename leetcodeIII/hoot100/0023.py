from typing import List, Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        res = None
        for node in lists:
            res = self.mergeTwoList(res, node)
        tmp = res
        while tmp:
            print(tmp.val, end=' ')
            tmp = tmp.next

        return res

    def mergeTwoList(self, node1, node2):
        head = ListNode()
        node = head
        while node1 and node2:
            if node1.val < node2.val:
                tmp = node1
                node.next = tmp
                node = tmp
                node1 = node1.next
            else:
                tmp = node2
                node.next = tmp
                node = tmp
                node2 = node2.next
        if node1:
            node.next = node1
        if node2:
            node.next = node2

        # tmp = head.next
        # while tmp:
        #     print(tmp.val, end=' ')
        #     tmp = tmp.next
        return head.next


def create(arr):
    head = ListNode()
    node = head
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


Solution().mergeKLists([create([])])
