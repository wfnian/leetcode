class Solution2(object):
    def findworld(self,words):
        a=''.join(sorted(set('qwertyuiop')))
        b=''.join(sorted(set('asdfghjkl')))
        c=''.join(sorted(set('zxcvbnm')))
        ans = []
        for word in words:
            t = word.lower()
            if ''.join(sorted(set(t + a))) in a:
                ans.append(word)
            if ''.join(sorted(set(t + b))) in b:
                ans.append(word)
            if ''.join(sorted(set(t + c))) in c:
                ans.append(word)
        return ans
class Solution(object):
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        a=set('qwertyuiop')
        b=set('asdfghjkl')
        c=set('zxcvbnm')
        ans=[]
        for word in words:
            t=set(word.lower())
            if a&t==t:
                ans.append(word)
            if b&t==t:
                ans.append(word)
            if c&t==t:
                ans.append(word)
        return ans    
a = Solution()
#print(a.findWords(['sdfghj','vfvasved','zxcvb','fdasfasdv']))
b = Solution2()
print(b.findworld(['qwer','asdf','zxcvb','fdasfasdv']))