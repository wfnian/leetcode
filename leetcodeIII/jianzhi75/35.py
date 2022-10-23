class Node:
    def __init__(self, x, next=None, random=None):
        self.val = int(x)
        self.next = next
        self.random = random


class Solution(object):
    def copyRandomList(self, head):
        """
        :type head: Node
        :rtype: Node
        """
        d = dict()
        node = head
        while node:
            d[node] = Node(node.val)
            node = node.next
        node = head
        while node:
            if node.next: d[node].next = d[node.next]
            if node.random: d[node].random = d[node.ranodm]
            node = node.next
        return d[head]