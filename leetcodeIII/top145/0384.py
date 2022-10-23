class Solution(object):
    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        self.origin = [0] * len(nums)
        self.arr = [0] * len(nums)

        for i in range(len(nums)):
            self.origin[i] = nums[i]
            self.arr[i] = nums[i]

    def reset(self):
        """
        :rtype: List[int]
        """
        return self.origin

    def shuffle(self):
        """
        :rtype: List[int]
        """
        i = len(self.arr) - 2
        j = len(self.arr) - 1
        while i >= 0:
            if self.arr[i] > self.arr[i + 1]:
                i -= 1
            else:
                break
        while i >= 0 and j >= 0:
            if self.arr[j] < self.arr[i]:
                j -= 1
            else:
                break
        if i >= 0 and j >= 0:
            self.arr[i], self.arr[j] = self.arr[j], self.arr[i]
        l = i + 1
        r = len(self.arr) - 1
        while l < r:
            self.arr[l], self.arr[r] = self.arr[r], self.arr[l]
            l += 1
            r -= 1
        return self.arr


s = Solution(nums=[1, 2, 3])
print(s.shuffle())
print(s.reset())
print(s.shuffle())
