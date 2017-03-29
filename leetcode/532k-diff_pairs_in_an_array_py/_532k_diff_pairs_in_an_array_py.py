class Solution(object):
    def findPairs(self, nums, k):
        if k ==0:
            if len(nums)-len(set(nums))>=2:
                return 1
            return 0
        elif k< 0:
            return 0
        else:
            nums = list(set(nums))
            c = 0
            for i in range(len(nums)):
                for j in range(len(nums)):
                    if nums[i]+k==nums[j] and i!=j:
                        c+=1
            return c
S = Solution()
print(S.findPairs([1,1,1,1,1,1,1,1,1,1,1,1,1,1],0))
print(S.findPairs([1,2,3,4,5],0))
print(S.findPairs([1, 3, 1, 5, 4],0))
