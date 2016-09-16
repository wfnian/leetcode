#include<stdio.h>
int main() {
	int a[10], i;
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	void popo(int a[]);
	popo(a);
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	return 0;

}
void popo(int a[]) {
	int i, j, t;
	for (j = 1; j < 10; j++) {
		for (i = 0; i < 10 - j; i++) {
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
}