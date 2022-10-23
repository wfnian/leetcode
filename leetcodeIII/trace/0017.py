class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        d = {
            '2': 'abc',
            '3': 'def',
            '4': 'ghi',
            '5': 'jkl',
            '6': 'mno',
            '7': 'pqrs',
            '8': 'tuv',
            '9': 'wxyz',
        }
        res = []

        def trace(digits, path, idx):
            if idx == len(digits):
                res.append(path[:])
                return
            digit = digits[idx]
            digit = d[digit]
            for i in range(len(digit)):
                path += (digit[i])
                trace(digits, path, idx + 1)
                path = path[:-1]

        trace(digits, "", 0)
        return res


print(Solution().letterCombinations(""))