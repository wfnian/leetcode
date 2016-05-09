#include<stdio.h>
int main() {
	int i, a[10],j,temp;
	//printf("Please input 10 numbers:\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 9; i++) {//n-1
		for (j = 0; j < 9-i; j++) {//n-i-1
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j]=a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}
}