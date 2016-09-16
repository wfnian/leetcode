#include<stdio.h>
int main() {
	int a[5][3], i, j;
	float aver, sum=0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			sum += a[i][j];
			aver = sum / 3.0;
		
		}
		printf("%d  %.3f  %.3f \n", i + 1, sum, aver);
	}


	return 0;

}