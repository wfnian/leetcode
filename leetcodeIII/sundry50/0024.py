class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head: return head
        if not head.next: return head
        front = node1 = tmp = head
        font2 = node2 = tmp2 = head.next
        mark = True
        while tmp2.next:
            t = tmp2.next
            if mark:
                node1.next = tmp2
                node1 = tmp2
                mark = not mark
            else:
                node2.next = tmp2
                node2 = tmp2
                mark = not mark
            tmp2 = t

        head = front
        head2 = font2
        f2 = head2
        while head2 and head:
            t1 = head.next
            t2 = head2.next
            head2.next = head
            head.next = t2
            head = t1
            head2 = t2
        while f2:
            print(f2.val, end=' ')
            f2 = f2.next
        return f2


def create(arr):
    head = node = ListNode()
    for e in arr:
        tmp = ListNode(e)
        node.next = tmp
        node = tmp
    tmp = head.next
    while tmp:
        print(tmp.val, end=' ')
        tmp = tmp.next
    print()
    return head.next


node = create([1, 2, 3, 4])
Solution().swapPairs(node)