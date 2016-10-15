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
#include<malloc.h>
#define MAXSIZE 39


int myAtoi(char* str) {
	char *str1,*str2;
	str1 = (char*)malloc(96);
	str2 = (char*)malloc(96);
	int len = strlen(str), i, j = 0, negative = 0;
	long long sum = 0, temp = 0;
	if (len == 0)
		return 0;
	int plus = 0;
	for (i = 0; i < len; i++) {
		if (str[i] == '+' || str[i] == '-') {
			plus++;
		}
	}
	if (plus >= 2)
		return 0;
	for (i = 0; i < len; i++) {
		if (str[i] == '-')
			negative++;
	}
	int s2len = 0;
	for (i = 0; i < len; i++) {
		if (str[i]<'a' || str[i]>'z') {
			if (str[i] != ' '&&str[i + 1] == ' ') {
				str2[s2len] = str[i];
				s2len++;
				break;
			}
			else {
				str2[s2len] = str[i];
				s2len++;
			}
		}
		else break;
	}
	str2[s2len] = NULL;
	for (i = 0; i < s2len; i++) {
		if (str2[i] <= '9' && str2[i] >= '0') {
			str1[j] = str2[i];
			j++;
		}
	}
	str1[j] = NULL;
	puts(str1);
	temp = pow(10, j - 1);
	for (i = 0; i < j; i++) {
		sum += temp*(str1[i] - 48);
		if (sum > INT_MAX&&negative!=0) {
			return INT_MIN;
		}
		if (sum < INT_MIN) {
			return INT_MAX;
		}
		temp = temp / 10;
	}
	if (negative != 0)
		sum = -sum;
	if (sum < INT_MIN) {
		return INT_MIN;
	}
	if (sum > INT_MAX)
		return INT_MAX;
	return sum;

}
int main() {
	printf("%I32d\n",myAtoi("-2147483648"));
	printf("%I32d\n", myAtoi("      -11919730356x"));
	printf("%I32d\n", myAtoi(" +9333333333333333333333333"));
//	printf("%I32d\n", myAtoi("--21474"));
//	printf("%I32d\n", myAtoi("  -0012a42000000000000000"));
//	myAtoi("  -0012a42");
	//myAtoi("2147483647");
	//myAtoi("      -11919730356x");
	return 0;
}