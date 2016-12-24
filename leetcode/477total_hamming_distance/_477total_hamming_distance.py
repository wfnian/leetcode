class Solution1(object):
    def hammingDistance(self, x, y):
        x = bin(x)
        y = bin(y)
        lenx = len(x)
        leny = len(y)
        Len = 0
        if lenx<leny:#x<y// x = '0b101' y = '0b1000'
            Y = y[:-(lenx-2)]
            x = x[-(lenx-2):]
            y = y[-(lenx-2):]
            Len1 = len(x)
            while True:
                if x[Len1-1]!=y[Len1-1]:
                    Len = Len+1
                Len1 = Len1 - 1
                if Len1 == 0:
                    break;
            Len2 = len(Y)
            while True:
                if Len2==0:
                    break
                if Y[Len2-1]=='1':
                    Len = Len+1
                Len2 = Len2 - 1
        else :#lenx>leny:#x>y
            X = x[:-(leny-2)]
            x = x[-(leny-2):]
            y = y[-(leny-2):]
            Len1 = len(y)
            while True:
                if x[Len1-1]!=y[Len1-1]:
                    Len = Len+1
                Len1 = Len1 - 1
                if Len1 == 0:
                    break;
            Len2 = len(X)
            while True:
                if Len2==0:
                    break
                if X[Len2-1]=='1':
                    Len = Len+1
                Len2 = Len2 - 1
        return Len
class Solution(object):
    def totalHammingDistance(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        Lmain = Solution1()
        Sum = 0
        for i in range(len(nums)):
            for j in range(len(nums)):
                if nums[i]!=nums[j]and i!=j:
                    Sum = Sum+Lmain.hammingDistance(nums[i],nums[j])
        return (int(Sum/2))
a = [4,14,2]
MAIN = Solution()
print(MAIN.totalHammingDistance(a))
print(MAIN.totalHammingDistance([2,6,4]))