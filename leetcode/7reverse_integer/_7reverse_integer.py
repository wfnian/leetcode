"""
7. Reverse Integer
Have you thought about this?
Here are some good questions to ask before coding. 
Bonus points for you if you have already thought through this!
If the integer's last digit is 0, what should the output
 be? ie, cases such as 10, 100.
Did you notice that the reversed integer might overflow?
 Assume the input is a 32-bit integer, then the reverse 
 of 1000000003 overflows. How should you handle such cases?
For the purpose of this problem, assume that your function 
returns 0 when the reversed integer overflows.
"""
while True :
    x=int(input())
    a = str(x)
    b =''
    c=0
    if a[0]=='-':
        b=a[::-1]
        b=b[0:len(b)-1]
        c=-int(b)
    else :
        b=a[::-1]
        c=int(b)
    if c>2147483648 or c<=-2147483648:
        print(0)
    print(c)