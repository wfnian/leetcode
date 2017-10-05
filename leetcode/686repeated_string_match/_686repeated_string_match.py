
"""
Given two strings A and B, find the minimum number of times A has to be 
repeated such that B is a substring of it. If no such solution, return -1.

eg:
        For example, with A = "abcd" and B = "cdabcdab".
        Return 3, because by repeating A three times (“abcdabcdabcd”),
       B is a substring of it; and B is not a substring of A repeated two times ("abcdabcd").
"""
class Solution(object):
    def repeatedStringMatch(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: int
        """
        if B in A:
            return 1
        times = 1
        S = A
        while True:
            if B in S:
                return times -1
            else:
                S = times*A
                times+=1
            if len(S)>=3*(len(B)):
                break
        return -1
a = Solution()
print(a.repeatedStringMatch("abcd","cdabcdab"))