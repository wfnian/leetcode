class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        headNode = ListNode()
        headNode.next = head
        slow = fast = headNode
        cnt = 0
        while fast.next:
            # if tmp.next and tmp.next.val == 7:
            #     tmp.next = tmp.next.next
            fast = fast.next
            cnt += 1
            if cnt > n:
                slow = slow.next
        slow.next = slow.next.next
        # tmp = headNode.next
        # while tmp:
        #     print(tmp.val, end=' ')
        #     tmp = tmp.next
        # print()
        return headNode.next


def create(arr):
    head = node = ListNode()
    for elem in arr:
        tmp = ListNode(elem)
        node.next = tmp
        node = tmp
    tmp = head.next
    while tmp:
        print(tmp.val, end=' ')
        tmp = tmp.next
    print()
    return head.next


Solution().removeNthFromEnd(create([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]), 10)
