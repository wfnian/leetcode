#566. Reshape the Matrix 
class Solution(object):
    def matrixReshape(self, nums, r, c):
        """
        :type nums: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        row, col= len(nums), len(nums[0])
        if row*col!=r*c:return nums
        newNums2,newNums1 = [],[]
        for i in nums:
            for j in i:
                newNums1.append(j)
        n = 0
        for i in range(r):
            newNums2.append([])
            for j in range(c):
                newNums2[i].append(newNums1[n])
                n+=1
        return newNums2
a = Solution()
print(a.matrixReshape([[1,2],[3,4]],1,4))