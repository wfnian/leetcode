"""
Given two strings s and t, write a function 
to determine if t is an anagram of s.
For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.
"""
class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        return sorted(list(s)) == sorted(list(t))
print(Solution().isAnagram("hello","helol"))