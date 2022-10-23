class Solution1(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        one = head
        two = head

        while True:
            if not two or not two.next:
                return None
            one = one.next
            two = two.next.next
            if one == two:
                break

        two = head
        while one != two:
            one = one.next
            two = two.next
        return two


class Solution(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        d = set()
        node = head
        res = None

        while node:
            if node not in d:
                d.add(node)
                node = node.next
            else:
                res = node
                break
        return res