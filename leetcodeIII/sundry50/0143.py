class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def reorderList(self, head):
        """
        :type head: ListNode
        :rtype: None Do not return anything, modify head in-place instead.
        """
        def center(head):
            one, two = head, head
            while two.next and two.next.next:
                one = one.next
                two = two.next.next
            return one

        def reverse(head):
            tmp = head
            front = node = ListNode()
            while tmp:
                node = ListNode(tmp.val)
                node.next = front.next
                front.next = node
                tmp = tmp.next
            return front.next

        half = center(head)

        l1 = head
        l2 = half.next
        l2 = reverse(l2)
        half.next = None
        a, b = l1, l2
        node = a

        while a and b:
            tmp_a = a.next
            tmp_b = b.next
            a.next = b
            a = tmp_a

            b.next = a
            b = tmp_b

        return node


def create(arr):
    head = node = ListNode()
    for e in arr:
        tmp = ListNode(e)
        node.next = tmp
        node = tmp
    return head.next


def output(head):
    node = head
    while node:
        print(node.val, end=' ')
        node = node.next
    print()


node = create([1, 2, 3, 4, 5])
output(node)
Solution().reorderList(node)