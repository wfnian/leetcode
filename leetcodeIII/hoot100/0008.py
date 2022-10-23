class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        mark = False  #minus
        marka = False  #minus
        numAppear = False
        stack = []
        for i in s:
            if i == '-' and numAppear == False and mark == False and marka == False:
                mark = True  # 负数
                continue
            elif i == '+' and numAppear == False and marka == False and mark == False:
                marka = True
                continue
            elif i == ' ' and mark == False and numAppear == False and marka == False:
                continue
            elif ord(i) - 48 > -1 and ord(i) - 48 < 10:
                numAppear = True
                if stack == [] and ord(i) - 48 == 0:
                    continue
                stack.append(ord(i) - 48)
                if len(stack) == 11:
                    break
            else:
                break
        # print(len(stack))
        res = 0
        for i in range(len(stack)):
            res = res + (stack[i] * (10**(len(stack) - i - 1)))
        if mark:
            res = 2147483648 if res > 2147483648 else res
            return res * -1
        return 2147483647 if res > 2147483647 else res


print(Solution().myAtoi("21474836460"))
print(Solution().myAtoi(" +-1"))
print(Solution().myAtoi(" -+1"))
