#include<stdio.h>
int main() {
	int a[8] = { 1,2,3,4,5,6,7,8 };
	int *p;
	for (p = a; p < a + 8; p++) {
		printf("%d ", *p+1);
	}
	return 0;
}