num = int(input())
sums = 0
List = []
for i in range(num+1):
    a = bin(i)
    for j in range(1,len(a)):
        if '1'in a[j]:
            sums = sums+1
    List.append(sums)
    sums = 0
print(List)

