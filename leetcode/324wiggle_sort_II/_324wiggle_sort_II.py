class Solution(object):
    def wiggleSort(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        nums.sort()
        Len = int(len(nums)/2)
        for i in range(Len):
            nums.append(nums[i])
            del nums[0]
            nums.append(nums[Len+i])
            del nums[0]
            if len(nums)==Len:
                break
        #nums = nums[Len:]
        return nums
a = Solution()
print(a.wiggleSort([1, 1, 1, 4, 5, 6]))