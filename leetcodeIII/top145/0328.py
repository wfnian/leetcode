# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def oddEvenList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head:
            return head
        node1 = odd = head
        node2 = even = head.next
        node = front = ListNode()
        while node1:
            tmp = ListNode(node1.val)
            node.next = tmp
            node = tmp
            if node1.next:
                node1 = node1.next.next
            else:
                break
        while node2:
            tmp = ListNode(node2.val)
            node.next = tmp
            node = tmp
            if node2.next:
                node2 = node2.next.next
            else:
                break
        return front.next


def create(arr):
    head = node = ListNode()
    for elem in arr:
        tmp = ListNode(elem)
        node.next = tmp
        node = tmp
    return head.next


def pl(node):
    tmp = node
    while tmp:
        print(tmp.val, end=' ')
        tmp = tmp.next
    print()


node = create([1])
node = Solution().oddEvenList(node)
pl(node)