"""Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output ��Fizz�� instead of the number and for the multiples of five output ��Buzz��. For numbers which are multiples of both three and five output ��FizzBuzz��."""
a = int(input())
list = []
for i in range (a+1):
    if i%3==0 and i%5!=0:
        list.append('Fizz')
    elif i%5==0 and i%3!=0:
        list.append('Buzz')
    elif i%5==0 and i%3==0:
        list.append('FizzBuzz')
    else :
        list.append(str(i))
print(list)