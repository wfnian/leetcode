#include<stdio.h>
int main() {
	int x, y, z, n;
	for (int a = 100; a < 1000; a++) {
		if (((a % 10) * (a % 10) * (a % 10) + (a / 100)*(a / 100)*(a / 100) + ((a / 10) % 10)*((a / 10) % 10)*((a / 10) % 10))==a)
		printf("%d\n", a);
	}

	return 0;

}