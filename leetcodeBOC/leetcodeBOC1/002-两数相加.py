class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        extra = 0
        head = node = ListNode(0)
        while (l1 and l2):
            temp = ListNode((l1.val+l2.val+extra) % 10)
            extra = (l1.val+l2.val+extra)//10
            node.next = temp
            node = temp
            l1 = l1.next
            l2 = l2.next
        while l1:
            temp = ListNode((l1.val+extra) % 10)
            extra = (l1.val+extra)//10
            node.next = temp
            node = temp
            l1 = l1.next
        while l2:
            temp = ListNode((l2.val+extra) % 10)
            extra = (l2.val+extra)//10
            node.next = temp
            node = temp
            l2 = l2.next
        if extra:
            temp = ListNode(extra)
            node.next = temp
            node = temp
        # printList(head.next)
        return head.next


def create(nums):
    head = ListNode(0, None)
    node = ListNode(0, None)
    head = node

    for i in nums:
        temp = ListNode(i, None)
        node.next = temp
        node = temp
    return head.next


def printList(head):
    temp = head
    while temp:
        print(temp.val, end=', ')
        temp = temp.next
    print()


# print(printList(create([1, 2, 3, 4, 5])))
Solution().addTwoNumbers(create([2, 4, 6]), create([9, 6, 4]))
Solution().addTwoNumbers(create([9, 9, 9, 9, 9, 9, 9]), create([9, 9, 9, 9]))
