class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = s.upper()
        i = 0
        j = len(s) - 1
        while i < j:
            if not (ord('0') <= ord(s[i]) <= ord('9') or ord('A') <= ord(s[i]) <= ord('Z')):
                i += 1
                continue
            if not (ord('0') <= ord(s[j]) <= ord('9') or ord('A') <= ord(s[j]) <= ord('Z')):
                j -= 1
                continue

            if s[i] == s[j]:
                i += 1
                j -= 1
                continue

            else:
                return False
        return True


print(Solution().isPalindrome("A man, a plan, a canal: Panama"))
print(Solution().isPalindrome("0a0"))