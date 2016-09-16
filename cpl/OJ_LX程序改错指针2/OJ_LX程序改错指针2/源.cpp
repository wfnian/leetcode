#include<stdio.h>
void swap(int *a, int *b) {
	int t=0;
	/*t = *a;
	*a = *b;
	*b = t;*/
	printf("%d\n", *a+*b);
}
int main() {
	int x, y;
	while (scanf("%d %d", &x, &y) != EOF) {
		swap(&x, &y);
	}

	return 0;

}