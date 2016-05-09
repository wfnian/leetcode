#include<stdio.h>
//struct daoshu {
//	int a[10] ;
//};
int main() {
	int a[10], b[11], i;
	for (i = 0; i < 10;i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 10;) {
		b[i*2] = a[i] * a[i+1];
		i += 2;
	}
	for (i = 1; i < 10;) {
		b[2*i -1] = a[i] - 1;
		i += 2;
	}
	for (i = 0; i < 6; i++) {
		printf("%d ", b[i]);
	}

	return 0;

}