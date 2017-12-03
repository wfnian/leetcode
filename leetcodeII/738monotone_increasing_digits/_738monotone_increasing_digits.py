class Solution:
    def monotoneIncreasingDigits(self, N):
        """
        :type N: int
        :rtype: int
        """
        a = list(str(N))
        a.reverse()
        for i in range(len(a) - 1):
            if a[i] < a[i + 1]:
                for j in range(i+1):
                    a[j] = '9'
                a[i + 1] = str(int(a[i + 1]) - 1)
        a.reverse()
        return int(''.join(a))
        # ANOTHER SOLUTION TIME LIMITED ERROR
        # while True:
        #     if ''.join(sorted(list(str(N)))) == str(N):
        #         return N
        #     N -= 1


A = Solution()
print(A.monotoneIncreasingDigits(10))
print(A.monotoneIncreasingDigits(332))
print(A.monotoneIncreasingDigits(58903300000999))

