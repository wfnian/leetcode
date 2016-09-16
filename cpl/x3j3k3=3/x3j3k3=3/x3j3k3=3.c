#include<stdio.h>
int main() {
	int i, j, k;
	for (i = -5; i <= 11; i++) {
		for (j = -10; j <= 9; j++) {
			for (k = -6; k <= 18; k++) {
				if (i*i*i + j*j*j + k*k*k == 3)
					printf("%d %d %d\n", i, j, k);

			}
		}
	}

	return 0;

}