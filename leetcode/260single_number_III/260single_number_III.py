class Solution(object):
    def singleNumber(self, nums):
        LEN = len(nums)
        b = [0]*LEN
        for i in range(LEN):
            for j in range(LEN):
                if nums[i]==nums[j] and i!=j:
                    b[i] = 1
                    b[j] = 1
        c = []
        for i in range(LEN):
            if b[i]==0:
                c.append(nums[i])
        return c