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
        headNode = ListNode(0, head)
        node = temp = headNode
        cnt = 0
        while temp.next:
            temp = temp.next
            cnt += 1
            if cnt > n:
                node = node.next
        node.next = node.next.next

        return headNode.next


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


printl(Solution().removeNthFromEnd(create([1, 2, 3, 4, 5]), 2))
printl(Solution().removeNthFromEnd(create([1]), 1))
