class Node(object):
    def __init__(self, val=0, left=None, right=None, next=None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next


class Solution(object):
    def connect(self, root):
        """
        :type root: Node
        :rtype: Node
        """
        if root:
            que = []
            que.append(root)
            while que:
                n = len(que)
                for i in range(1, n):
                    que[i - 1].next = que[i]
                for i in range(n):
                    tmp = que.pop(0)
                    if tmp.left:
                        que.append(tmp.left)
                    if tmp.right:
                        que.append(tmp.right)

        return root