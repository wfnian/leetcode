#K1 = '!#$%&()*+-0123456789=@^_`~'
#K2 =''.join(sorted( """QWERTYUIOP{}|qwertyuiop[]\\"""))
#K3 = ''.join(sorted( """ASDFGHJKLasdfghjkl:";'"""))
#K4 = ''.join(sorted( 'zxcvbnmZXCVBNM<>?,./'))
#K5 = ' '
"""class Solution(object):
    def findWords(self, words):
        """
       # :type words: List[str]
       # :rtype: List[str]
"""
        return
Input = ["Hello", "Alaska", "Dad", "Peace"]
Output = ["Alaska", "Dad"]
output = []
count = 0
for i in range(len(Input)):
    k = 0
    for j in range(len(Input[i])):
        if Input[i][k] in K1:
            count+=1"""
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