class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution(object):
    def reversePrint(self, head):
        """
        :type head: ListNode
        :rtype: List[int]
        """
        self.res = []

        def printl(head):
            if head:
                printl(head.next)
                self.res.append(head.val)

        printl(head)
        return self.res


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


def printl(head):
    if head:
        printl(head.next)
        print(head.val)


l = create([1, 2, 3, 4])
printl(l)
