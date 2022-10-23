class Solution(object):
    def decodeString(self, s):
        """
        :type s: str
        :rtype: str  2[abc]3[cd]ef
        """
        num_stack = []
        str_stack = []
        res = ""
        num = 0
        for i, val in enumerate(s):
            if ord(val) - 48 >= 0 and ord(val) - 48 <= 9:  #= 数字
                num = num * 10 + ord(val) - 48
            elif val != '[' and val != ']':
                res += val
            elif val == '[':
                num_stack.append(num)
                str_stack.append(res)
                num = 0
                res = ""
            elif val == ']':
                times = num_stack.pop()
                tmp = str_stack.pop()
                res = tmp + res * times
        return res


print(Solution().decodeString('2[abc]3[cd]ef'))
# print(Solution().decodeString('3[a2[c]]'))