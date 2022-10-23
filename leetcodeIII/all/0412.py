class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        res = []
        for idx in range(1, n + 1):
            if idx % 3 == 0 and idx % 5 == 0:
                res.append("FizzBuzz")
                continue
            if idx % 3 == 0:
                res.append("Fizz")
                continue
            if idx % 5 == 0:
                res.append("Buzz")
                continue
            res.append(str(idx))
        return res