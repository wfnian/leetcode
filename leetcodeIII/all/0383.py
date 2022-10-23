class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        d = dict()
        for val in magazine:
            if val in d:
                d[val] += 1
            else:
                d[val] = 1
        for val in ransomNote:
            if val not in d:
                return False
            if val in d:
                d[val] -= 1
                if d[val] < 0:
                    return False
        return True