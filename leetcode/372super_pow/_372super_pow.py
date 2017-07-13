class Solution(object):
    """def superPow(self, a, b):
        
        :type a: int
        :type b: List[int]
        :rtype: int
        
        return pow(a,int(''.join([str(i) for i in b])))%1337"""
    def superPow(self, a, b):
        return pow(a, int(''.join(map(str, b))), 1337)#equal to a**int(...)%1337;
