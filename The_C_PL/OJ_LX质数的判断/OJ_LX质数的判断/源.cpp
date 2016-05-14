#include<stdio.h>
int main() {
	int N;
	int M;
	int i;
	while (scanf("%d", &N) != EOF) {
		for (i = 0; i < N; i++) {
			scanf("%i", &M);
			if (M < 2)
				printf("no\n");
			else {
				for (int j = 2; j < M; j++) {
					if (M%j == 0 ) 
						break;
					if (i == M) {
						printf("yes\n");
					}
					else 
						printf("yes\n");
				}
			}
		}
	}
}