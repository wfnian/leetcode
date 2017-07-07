# ////////////////////////////////////////////////////////////////////

# Note: The trick is that the last letter is always added.
# Except the last one, if one letter is less than its latter one, 
# this letter is subtracted

# 'M': 1000,'D': 500 ,'C': 100,'L': 50,'X': 10,'V': 5,'I': 1
# "DCXXI"
# 621.

# ////////////////////////////////////////////////////////////////////
class Solution():
def romanToInt(self, s):
    roman = {'M': 1000,'D': 500 ,'C': 100,'L': 50,'X': 10,'V': 5,'I': 1}
    z = 0
    for i in range(0, len(s) - 1):
        if roman[s[i]] < roman[s[i+1]]:
            z -= roman[s[i]]
        else:
            z += roman[s[i]]
    return z + roman[s[-1]]
