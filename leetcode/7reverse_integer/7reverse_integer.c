/*
7. Reverse Integer 
Example1: x = 123, return 321
Example2: x = -123, return -321
*/
#include<stdio.h>
int reverse(int x) {
	if (x > 2147483648 || x <= -2147483648)
		return 0;
	return 0;
}
int main() {
	int x=-12;
	int j = 1,a[20];
	if (x < 0) {
		x = -x;
		while (x >= 10) {
			x= x / 10;
			j++;
		}
		printf("%d", j);
	}
	else {
		while (x >= 10) {
			x = x / 10;
			j++;
		}
		printf("%d", j);
	}
}
