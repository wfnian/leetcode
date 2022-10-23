class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        extra = 0
        for i in range(len(digits) - 1, -1, -1):
            if i == len(digits) - 1:
                if digits[i] != 9:
                    digits[i] += 1
                    return digits
                digits[i] = 0
                extra = 1
            else:
                tmp = (digits[i] + extra) % 10
                extra = (digits[i] + extra) // 10
                digits[i] = tmp
        if extra:
            tail = digits[-1]
            for i in range(len(digits) - 1, 0, -1):
                digits[i] = digits[i - 1]
            digits.append(tail)
            digits[0] = extra
        print(digits)
        return digits


Solution().plusOne([1, 2, 3, 9])
Solution().plusOne([9, 9])
Solution().plusOne([9])
