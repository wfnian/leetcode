/*8. String to Integer (atoi)
https://leetcode.com/problems/string-to-integer-atoi/
Implement atoi to convert a string to an integer.
Hint: Carefully consider all possible input cases.
If you want a challenge, please do not see below and 
ask yourself what are the possible input cases.
Notes: It is intended for this problem to be specified
vaguely (ie, no given input specs).You are responsible 
to gather all the input requirements up front.
*/

#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
//#  define INT_MIN    (-INT_MAX - 1)
//#  define INT_MAX    2147483647
#define MAXSIZE 9
int myAtoi(char* str) {
	int len;
	long sum = 0;
	len = strlen(str);
	int numarray[MAXSIZE];
	long number;
	for (int i = 0; i < len; i++) {
		numarray[i] = str[i] - 48;
	}
	int length = pow(10, len-1);
	for (int i = 0; i < len; i++) {
		sum +=length* numarray[i];
		length = length / 10;
	}
	printf("%d\n", sum);
	if (sum > 2147483647) { return INT_MAX; }
	else if (sum < -2147483648) { return INT_MIN; }
	else return sum;
}

int main() {
	char *str1;
	myAtoi("1234");
	myAtoi("1234567");
	myAtoi("12345678");
	myAtoi("     +004500");
	return 0;
}