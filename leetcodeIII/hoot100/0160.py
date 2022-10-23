class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        # l1 = headA
        # while l1:
        #     l2 = headB
        #     while l2:
        #         if l2 == l1:
        #             return l2
        #         else:
        #             l2 = l2.next
        #     l1 = l1.next
        # return None
        l1, l2 = [], []
        while headA:
            l1.append(headA)
            headA = headA.next
            # len1 += 1
        while headB:
            l2.append(headB)
            headB = headB.next
            # len2 += 1
        node = ListNode(-1)
        while l1 and l2:
            if l1[-1] == l2[-1]:
                l1[-1].next = node.next
                node.next = l1[-1]
                l1.pop()
                l2.pop()
            else:
                break
        return node.next


def create(arr):

    head = ListNode(-1)
    node = head
    for val in arr:
        tmp = ListNode(val)
        node.next = tmp
        node = tmp

    tmp = head.next
    while tmp != None:
        print(tmp.val, end=' ')
        tmp = tmp.next
    return head.next


node1 = ListNode(1)
node2 = ListNode(2)
node3 = ListNode(3)
node4 = ListNode(4)
node1.next = node2
node2.next = node3
node3.next = node4

l1 = node1
l2 = node3
print(Solution().getIntersectionNode(l1, l2))
