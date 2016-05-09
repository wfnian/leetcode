#include<stdio.h>
#define NUM 100000
int main() {
	long long Fib[NUM];
	int i;
	long long N;
	while (scanf("%lld", &N) != EOF) {
		if (N == 0)
			;
		else {
			Fib[0] = 1;
			Fib[1] = 1;
			for (i = 2; i < N; i++) {
				Fib[i] = Fib[i - 1] + Fib[i - 2];
			}
			printf("%d\n", Fib[N - 1]);
		}
	}
}