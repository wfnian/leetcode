////////////////////////////////////////////////////////
/*
We define the Perfect Number is a positive integer that is 
equal to the sum of all its positive divisors except itself.
Now, given an integer n, write a function that returns 
true when it is a perfect number and false when it is not.
Example:
Input: 28
Output: True
Explanation: 28 = 1 + 2 + 4 + 7 + 14
*/
////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool checkPerfectNumber(int num) {
	if (num < 3)
		return false;
	int s = (int)sqrt(num), sum = 1;//i*i = num so is sqrt not num/2!!!
	for (size_t i = 2; i <= s; i++) {
		if (num % i == 0) {
			sum += i;
			if (num / i != i)
				sum += (num / i);
		}
	}
	//printf("%d %d \n", sum, num);
	return sum == num;
}

int main(void)
{
	printf("%d\n", checkPerfectNumber(28));
}