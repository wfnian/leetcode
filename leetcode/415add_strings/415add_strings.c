/*
415. Add Strings
Given two non-negative numbers num1 and num2 represented
as string, return the sum of num1 and num2.
The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or
convert the inputs to integer directly.
*/
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<math.h>
char* addStrings(char* num1, char* num2) {
	char* num3 = (char*)malloc(5101);
	char* num4 = (char*)malloc(5101);
	long long i, len1, len2, length3 = 0, length4 = 0;
	long long sum1 = 0, sum2 = 0, temp1, temp2;
	len1 = strlen(num1);
	len2 = strlen(num2);
	for (i = 0; i < len1; i++) {
		if (num1[i] <= '9'&&num1[i] >= '0') {
			num3[length3] = num1[i];
			length3++;
		}
	}
	num3[length3] = NULL;
	temp1 = pow(10, length3 - 1);
	for (i = 0; i < length3; i++) {
		sum1 += (num3[i] - 48)*temp1;
		temp1 /= 10;
	}
	printf("%ld\n", sum1);
	for (i = 0; i < len2; i++) {
		if (num2[i] <= '9'&&num2[i] >= '0') {
			num4[length4] = num2[i];
			length4++;
		}
	}
	num4[length4] = NULL;
	temp2 = pow(10, length4 - 1);
	for (i = 0; i < length4; i++) {
		sum2 += (num4[i] - 48)*temp2;
		temp2 /= 10;
	}
	sum1 = sum1 + sum2;
	printf("%d\n", sum1);
	char* num = (char*)malloc(5101);
	long long n = 1, j;
	long long  b;
	long m = sum1 % 10;
	int nu[200];
	char numstr[200];
	while (sum1 / 10 != 0)
	{
		n++;
		sum1 = sum1 / 10;
		b = sum1 % 10;
		nu[n] = b;
	}
	numstr[0] = m + 48;
	for (j = 1, i = 2; i <= n; j++, i++) {
		numstr[j] = nu[i] + 48;
	}
	numstr[n] = NULL;
	int lenmm = strlen(numstr);
	for (i = 0; i < lenmm; i++) {
		num[lenmm - i - 1] = numstr[i];
	}
	num[lenmm] = NULL;
	puts(num);
	return num;
}
int main() {
	printf(" ", addStrings("3876620623801494171", "6529364523802684779"));/*"123456789"
																		  "987654321"  "1111111110"*/
	addStrings("1", "1");
	/*
	"3876620623801494171"
	"6529364523802684779"
	"10405985147604178950"
	*/

}