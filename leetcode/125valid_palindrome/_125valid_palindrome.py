"""
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.
"""
#一行代码哈哈
class Solution(object):
    def isPalindrome(self, s):

        return ''.join([s[i] for i in range(len(s)) if s[i].isalnum()]).lower() == ''.join(
            [s[i] for i in range(len(s)) if s[i].isalnum()]).lower()[::-1]
a = Solution()
print(a.isPalindrome('0p'))