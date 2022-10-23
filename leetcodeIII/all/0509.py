class Solution:
    def fib(self, n: int) -> int:
        """ 
        f[0]=0
        f[1]=1
        f[2]=f[2-1]+f[2-2]
        """
        f = (n + 1) * [0]
        if n == 0:
            return 0
        if n == 1:
            return 1
        f[0], f[1] = 0, 1
        for i in range(2, n + 1):
            f[i] = f[i - 1] + f[i - 2]
        return f[i]