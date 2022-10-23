class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        one = head
        two = head
        # while two is not None and two.next is not None:
        while two != None and two.next != None:
            one = one.next
            two = two.next.next
        print(one.val)
        return one.val


def create(arr):

    head = ListNode()
    node = head
    for val in arr:
        tmp = ListNode(val=val)
        node.next = tmp
        node = tmp

    tmp = head.next
    while tmp != None:
        print(tmp.val, end=' ')
        tmp = tmp.next
    return head.next


res = create([1, 2, 3, 4, 5])
res = Solution().middleNode(res)
