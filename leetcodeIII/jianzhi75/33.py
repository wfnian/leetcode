class TreeNode(object):
    def __init__(self, x, left=None, right=None):
        self.val = x
        self.left = left
        self.right = right


class Solution(object):
    def verifyPostorder(self, postorder):
        """
        :type postorder: List[int]
        :rtype: bool
        """
        def helper(arr, left, right):
            if left >= right: return True
            root = arr[right]
            mid = left
            while arr[mid] < root:
                mid += 1
            tmp = mid
            while arr[tmp] > root:
                tmp += 1
            if tmp != right: return False
            return helper(arr, left, mid - 1) and helper(arr, mid, right - 1)

        return helper(postorder, 0, len(postorder) - 1)


print(Solution().verifyPostorder([1, 2, 5, 10, 6, 9, 4, 3]))
""" 
          10
        /    \
       8     12
      / \    / \
     5   9  11  13
    / \
   3   6

中序遍历： [3,6,5,9,8,11,13,12,10]
           \______/   \____/   |
              左        右    根    

"""