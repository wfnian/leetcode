/*
Ugly numbers are positive numbers whose prime factors 
only include 2, 3, 5. For example, 6, 8 are ugly
while 14 is not ugly since it includes another prime factor 7.
*/
#include<stdbool.h>
int ugly(long  n) {
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		}
		else if (n % 3 == 0) {
			n /= 3;
		}
		else if (n % 5 == 0) {
			n /= 5;
		}
		else return 0;
	}
	return 1;
}
bool isUgly(int num) {
	if (num == 0)
		return 0;
	return ugly(num);
}