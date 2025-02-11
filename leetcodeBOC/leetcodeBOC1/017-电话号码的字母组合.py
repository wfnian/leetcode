from typing import List


class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        d = {
            '2': 'abc',
            '3': 'def',
            '4': 'ghi',
            '5': 'jkl',
            '6': 'mno',
            '7': 'pqrs',
            '8': 'tuv',
            '9': 'wxyz'
        }
        if not (digits):
            return []
        res = []

        def trace(start_index, digits, path):
            if len(path) == len(digits):
                res.append(path)
                return
            s = d[digits[start_index]]
            for i in range(0, len(s)):
                path += s[i]
                trace(start_index+1, digits, path)
                path = path[:-1]
        trace(0, digits, '')
        return res


print(Solution().letterCombinations("23"))
print(Solution().letterCombinations(""))
