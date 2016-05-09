#include<stdio.h>
#define NUM 100
int main() {
	float a[NUM], b[NUM];
	int i, j, k, n;
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++) {
			int M1;
			float aver, N = 0.0;
			scanf("%d", &M1);
			for (j = 0; j < M1; j++) {
				scanf("%f", &a[j]);
				N += a[j];
			}
			aver = N / M1;
			if((int)aver==aver)printf("%.f\n", aver);
			else printf("%.1f\n", aver);
		}
	}
}