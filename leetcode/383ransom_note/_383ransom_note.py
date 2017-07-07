#  Given an arbitrary ransom note string and another string
#  containing letters from all the magazines, write a function
#  that will return true if the ransom note can be constructed 
#  from the magazines ; otherwise, it will return false.
#  我的理解是看看是不是每个元素是不是有一一对应？
class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        magazine = list(magazine)
        ransomNote = list(ransomNote)
        for i in ransomNote:
            if i in magazine:
                magazine[magazine.index(i)] = '#'
        return magazine.count('#')==len(ransomNote)
a = Solution()
a.canConstruct("aa",'aab')
a.canConstruct("aa", "ab")


