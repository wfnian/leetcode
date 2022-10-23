class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        tail = head
        node = ListNode(-1)
        while tail:
            tmp = ListNode(tail.val)
            tmp.next = node.next
            node.next = tmp
            tail = tail.next

        reverse = node.next
        while head:
            if head.val != reverse.val:
                return False
            head = head.next
            reverse = reverse.next
        return True


def create(arr):

    head = node = ListNode(-1)

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


def create_head(arr):

    head = node = ListNode(-1)

    for elem in arr:
        tmp = ListNode(elem)
        tmp.next = node.next
        node.next = tmp

    tmp = node.next
    while tmp:
        print(tmp.val, end=' ')
        tmp = tmp.next
    return head.next


def printl(head, l2):
    if head:
        printl(head.next, l2)
        # print(head.val)
        print(l2.val)
        l2 = l2.next


l1 = create([1, 2, 3, 4])
l2 = create([1, 2, 3, 4])

# print(Solution().isPalindrome(create([1, 2, 2, 1])))
# print(Solution().isPalindrome(create([1, 2, 2, 2])))
