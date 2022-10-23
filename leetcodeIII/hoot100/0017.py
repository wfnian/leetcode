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

        n = len(digits)
        res = []

        # nums = ["a", "b", "c"]

        def trace(digits, idx, path):
            if len(path) == len(digits):
                res.append(path[:])
                return
            s = d[digits[idx]]
            for i in range(0, len(s)):

                path += s[i]
                trace(digits, idx + 1, path)
                path = path[:-1]

        trace(digits, 0, '')

        return res


print(Solution().letterCombinations("23"))
print(Solution().letterCombinations("2"))
