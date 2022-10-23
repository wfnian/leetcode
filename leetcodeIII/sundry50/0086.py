class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def partition(self, head, x):
        """
        :type head: ListNode
        :type x: int
        :rtype: ListNode
        """
        front1 = node1 = ListNode()
        front2 = node2 = ListNode()
        node = head
        while node:
            if node.val < x:
                tmp = ListNode(node.val)
                node1.next = tmp
                node1 = tmp
            else:
                tmp = ListNode(node.val)
                node2.next = tmp
                node2 = tmp
            node = node.next
        node1.next = front2.next
        tmp = front1
        # while tmp:
        #     print(tmp.val, end=' ')
        #     tmp = tmp.next
        # print()
        return front1.next


def create(arr):
    head = node = ListNode()
    for e in arr:
        tmp = ListNode(e)
        node.next = tmp
        node = tmp
    tmp = head
    while tmp:
        print(tmp.val, end=' ')
        tmp = tmp.next
    print()
    return head.next


node = create([1, 4, 3, 2, 5, 2])
print(Solution().partition(node, 3))
