"""
A word is uncommon if it appears exactly once in one of the sentences, 
and does not appear in the other sentence.
Return a list of all uncommon words. 
You may return the list in any order.

Example 1:

Input: A = "this apple is sweet", B = "this apple is sour"
Output: ["sweet","sour"]
"""
class Solution:
    def uncommonFromSentences(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: List[str]
        """
        A, B = A.split(), B.split()
        res = []
        for i in A:
            if A.count(i) == 1 and i not in B:
                res.append(i)
        for i in B:
            if B.count(i) == 1 and i not in A:
                res.append(i)
        return res


s = Solution()
print(s.uncommonFromSentences("this apple is sweet", "this apple is sour"))
print(s.uncommonFromSentences("apple apple", "banana"))
print(s.uncommonFromSentences("", ""))

