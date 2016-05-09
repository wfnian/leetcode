#include<stdio.h>
int main() {
	int i, j, k;
	for (i = 0; i < 22; i++) {
		for (j = i; j < 22; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;

}