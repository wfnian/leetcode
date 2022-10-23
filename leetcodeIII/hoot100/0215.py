class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        self.build_heap(nums, len(nums))
        for i in range(len(nums) - 1, -1, -1):
            nums[i], nums[0] = nums[0], nums[i]
            self.heapify(nums, i, 0)
            k -= 1
            if not k:
                return nums[i]

    def heapify(self, nums, n, i):
        if i < n:
            left = i * 2 + 1
            right = i * 2 + 2
            max_ = i
            if left < n and nums[left] > nums[max_]:
                max_ = left
            if right < n and nums[right] > nums[max_]:
                max_ = right
            if max_ != i:
                nums[i], nums[max_] = nums[max_], nums[i]
                self.heapify(nums, n, max_)

    def build_heap(self, nums, n):
        last_node = n - 1
        parent = (last_node - 1) // 2
        for i in range(parent, -1, -1):
            self.heapify(nums, n, i)

    def heap_sort(self, nums, n):
        self.build_heap(nums, n)
        for i in range(n - 1, -1, -1):
            nums[i], nums[0] = nums[0], nums[i]
            self.heapify(nums, i, 0)


print(Solution().findKthLargest([3, 2, 1, 5, 6, 4], 2))
