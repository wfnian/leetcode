#pragma once

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int jh(int *x, int *y);
	jh(&a, &b);
	printf("%d %d", a, b);

	return 0;

}
