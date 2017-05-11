class Solution(object):
    def singleNumber(self, nums):
        nums.sort()#首先排序
        newnums = []    #新的nums存放list
        for i in range(1, len(nums), 2):    #每隔两个计数，再大的也会分为一半
            if nums[i-1]!=nums[i]:
                newnums.append(nums[i-1])
                nums1 = nums[i:]  #重复刚才做的
                if len(nums1) < 2:  #特殊情况的考虑
                    newnums.append(nums1[0])
                for j in range(1, len(nums1), 2):  #重复 i 的循环
                    if nums1[j - 1] != nums1[j]:
                        newnums.append(nums1[j-1])
                        break
                    elif j+2 >= len(nums1): #特殊情况处理
                        newnums.append(nums1[j+1])
                        break
            if len(newnums) >= 2:  #最好的情况下使用break会提高速度
                break
        return newnums
#nums = [1, 2, 1, 3, 2, 5, 6, 6, 9, 9, 7, 7]
nums = [0,1,2,2]
a = Solution()
print(a.singleNumber(nums))