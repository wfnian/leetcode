#496. Next Greater Element I
class Solution(object):#next Greater
    def nextGreaterElement(self, findNums, nums):
        """
        :type findNums: List[int]
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = []
        
        for i in findNums:
            new = []
            for j in nums:
                s = False
                index = nums.index(i)
                new = nums[index:]
                if max(new)<=i:
                    ans.append(-1)
                    s = True
                else:
                    for k in new:
                        if k>i:
                            ans.append(k)
                            s = True
                            break
                if s == True:
                    break

        return ans
a = Solution()
print(a.nextGreaterElement([2,4],[1,2,3,4]))
print(a.nextGreaterElement([4,1,2],[1,3,4,2]))
