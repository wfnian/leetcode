"""
The rules of Goat Latin are as follows:

    If a word begins with a vowel (a, e, i, o, or u), append "ma" to the end of the word.
    For example, the word 'apple' becomes 'applema'.
 
    If a word begins with a consonant (i.e. not a vowel), remove the first letter and append it to the end, then add "ma".
    For example, the word "goat" becomes "oatgma".
 
    Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
    For example, the first word gets "a" added to the end, the second word gets "aa" added to the end and so on.
"""
class Solution:
    def toGoatLatin(self, S):
        """
        :type S: str
        :rtype: str
        """
        vowel = ['a','o','e','i','u','A','O','E','I','U']
        ans = 1
        ma = 'ma'
        S = S.split()
        res = []
        for s in S:
            if s[0] in vowel:
                res.append(s+ma+ans*'a')
            else:
                res.append(s[1:]+s[0]+ma+'a'*ans)
            ans = ans+1
        return ' '.join(res)
