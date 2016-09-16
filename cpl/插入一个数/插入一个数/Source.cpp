#include<stdio.h>
int main() {
	int a[9], b[10];
	int i, j, n,m;
	for (i = 0; i < 9; i++) {
		scanf_s("%i", &a[i]);
	}
	scanf_s("%i", &n);
	for (i = 0,m=0,j=0;i<9;j++, i++) {
		if (a[i] <n) {
			b[j] = a[i];
			m++;
			
		}
		else break;
	}
	b[m] = n;
	for (j = m + 1, i = m; i < 9; j++, i++) {
		b[j] = a[i];
	}
	b[10] = NULL;
	for (i = 0; i < 10; i++) {
		printf("%i\n", b[i]);
	}
}