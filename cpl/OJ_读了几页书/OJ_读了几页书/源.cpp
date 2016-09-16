#include<stdio.h>
int main() {
	int x, m, n, sum = 0;
	scanf("%d %d %d", &x, &m, &n);
	for (int i = 0; i < n; i++) {
		sum += x;
		x += m;
	}
	printf("%d\n", sum);

	return 0;

}