# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class ListNode():
    def __init__(self, val=0, next=None) -> None:
        self.val = val
        self.next = next


class Solution(object):
    def reverseKGroup(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        def reverse(head, tail):
            res = []
            while head != tail.next:
                res.append(head)
                head = head.next
            front = ListNode()
            head = front
            while res:
                front.next = res[-1]
                front = front.next
                res.pop()
            return head.next, front

        front = ListNode()
        front.next = head
        node = front

        while head:
            tail = node
            for _ in range(k):
                tail = tail.next
                if not tail:
                    return front.next
            next = tail.next
            head, tail = reverse(head, tail)
            tail.next = next
            node.next = head
            node = tail
            head = next
        return front.next


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


print(Solution().reverseKGroup(create([1, 2, 3, 4, 5, 6, 7]), 2))
