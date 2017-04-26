class Solution(object):
    def nearestPalindromic(self, n):
        less, more = int(n)-1, int(n)+1
        i = 0
        while i+1<10000000:
            if str(less)[::-1]==str(less):
                return str(less)
            if str(more)[::-1]==str(more):
                return str(more)
            less -= 1
            more += 1
a = Solution()
print(a.nearestPalindromic("1924719291"))
print(a.nearestPalindromic("1095500901"))
