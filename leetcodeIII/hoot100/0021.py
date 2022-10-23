class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        head = node = ListNode()
        while list1 and list2:
            if list1.val < list2.val:
                tmp = ListNode(list1.val)
                node.next = tmp
                node = tmp
                list1 = list1.next
            else:
                tmp = ListNode(list2.val)
                node.next = tmp
                node = tmp
                list2 = list2.next
        while list1:
            tmp = ListNode(list1.val)
            node.next = tmp
            node = tmp
            list1 = list1.next
        while list2:
            tmp = ListNode(list2.val)
            node.next = tmp
            node = tmp
            list2 = list2.next
        tmp = head.next
        while tmp:
            print(tmp.val, end=' ')
            tmp = tmp.next
        print()
        return head.next


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


Solution().mergeTwoLists(create([]), create([0]))
