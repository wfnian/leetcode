#define N 3
#include<stdio.h>
#include<math.h>
typedef struct complex {
	float x;
	float y;
	float m;
}in;
void main() {
	in cp[N], temp;
	int i, j;
	for (i = 0; i < N; i++) {
		scanf("%f%f", &cp[i].x, &cp[i].y);
		cp[i].m = sqrt((cp[i].x*cp[i].x) + (cp[i].y*cp[i].y));
	}
	for (i = 0; i < N-1; i++) {
		for (j = 1; j < N - 1-i; j++) {
			if (cp[j].m>cp[j + 1].m) {
				temp = cp[j];
				cp[j] = cp[j + 1];
				cp[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < N; i++) {
		printf("%8.3f+%8.3fi\n", cp[i].x, cp[i].y);
	}
}