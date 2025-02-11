def solution(num):
    d = {0:'@',1:'$',2:'&'}
    res = ""
    while num:
        res = d[(num%3)]+res
        num//=3
    return res

print(solution(123))
