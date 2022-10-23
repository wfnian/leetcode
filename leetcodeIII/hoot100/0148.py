class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def sortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        def mergeSort(head):
            if not head or not head.next:
                return head
            one, two = head, head.next
            while two.next and two.next.next:
                one = one.next
                two = two.next.next

            mid = one.next
            one.next = None
            left = mergeSort(head)
            right = mergeSort(mid)

            res = merge(left, right)
            return res

        def merge(left, right):
            head = node = ListNode(-1)
            while left and right:
                if left.val < right.val:
                    tmp = ListNode(left.val)
                    node.next = tmp
                    node = tmp
                    left = left.next
                else:
                    tmp = ListNode(right.val)
                    node.next = tmp
                    node = tmp
                    right = right.next
            while left:
                # tmp = ListNode(left.val)
                # node.next = tmp
                # node = tmp
                # left = left.next
                node.next = left
                break
            while right:
                # tmp = ListNode(right.val)
                # node.next = tmp
                # node = tmp
                # right = right.next
                node.next = right
                break
            return head.next

        return mergeSort(head)


def create(arr, pt=False):
    head = node = ListNode(-1)
    for elem in arr:
        tmp = ListNode(elem)
        node.next = tmp
        node = tmp
    if pt:
        tmp = head.next
        while tmp:
            print(tmp.val, end=' ')
            tmp = tmp.next
        print()
        # one, two = head.next, head.next.next
        # while two.next and two.next.next:
        #     one = one.next
        #     two = two.next.next
        # print(two.val)
        # print(one.next.val)
    return head.next


l1 = create([1, 2, 3, 4, 5, 6, 7])
l2 = Solution().sortList(l1)
tmp = l2
while tmp:
    print(tmp.val, end=' ')
    tmp = tmp.next
print()