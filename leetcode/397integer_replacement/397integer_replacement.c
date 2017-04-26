//397. Integer Replacement
#include<stdio.h>
int integerReplacement(int n) {
	int step1 = 0, step2 = 0,m = n;
	while (n > 1) {
		if (n % 2 == 0) {
			n /= 2;
		}
		else n += 1;
		step1++;
	}
	while (m>1)
	{
		if (m % 2 == 0) {
			m /= 2;
		}
		else m -= 1;
		step2++;
	}
	return step1 > step2 ? step2 : step1;
}
int main(void) {
	int i = 10000000;
	printf("%d\n", integerReplacement(8));
	printf("%d\n", integerReplacement(7));
	printf("%d\n", integerReplacement(65535));
}