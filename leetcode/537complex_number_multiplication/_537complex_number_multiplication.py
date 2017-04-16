class Solution(object):
    def complexNumberMultiply(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        a, b = a.replace('i','j'), b.replace('i','j')
        if('+-'in a):
            a = a.replace('+-','-')
        if('+-'in b):
            b = b.replace('+-','-')
        a = complex(a)
        b = complex(b)
        c = str(a*b)
        if '+' in c:
            strs = str(c).replace('j','i').replace(')','').replace('(','')
        elif(('+'in c )== False)and(('-'in c)==False):
            strs = '0+'+str(c).replace('j','i').replace(')','').replace('(','')
        elif(len(c[:c.index('-')])==0):
            strs = '0'+str(c).replace('j','i').replace('-','+-').replace(')','').replace('(','')
        else:
            strs = str(c).replace('j','i').replace('-','+-').replace(')','').replace('(','')
        if(strs[0] == '+' and strs[1]== '-'):
            return strs[1:]
        return strs
