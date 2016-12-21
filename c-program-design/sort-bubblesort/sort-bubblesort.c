#include<stdio.h>
#define Local
int a[100];
void bubblesort(int n) {
	int i, j;
	int temp;
	for (i = 1; i < n; i++) {
		for (j = 0; j < n -i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main() {
	int n;
#ifdef Local
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif // Local
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	quicksort(n);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;

}//data.in 11 -1 6 2 3 5 4 7 9 8 1 0