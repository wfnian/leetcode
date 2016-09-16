#include<stdio.h>
int main() {
	int a[10], i, k;
	printf("Please input 10 number:\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	printf("Please input what you want to look for:\n");
	scanf("%d", &k);
	for (i = 0; i < 10; i++) {
		if (a[i] == k) {
			printf("FOUND!%d\n",i+1);
		}
		else continue;
	}

	return 0;

}