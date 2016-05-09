#include<stdio.h>
int main() {
	int a[9], b[10], i, n, m;
	for (i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &n);
	for (i = 0;i<10; i++) {
		if (a[i]<n&&a[i + 1]>n)
		m = i ;
		/*break;*/
	}
	for (i = 0; i < m; i++) {
		printf("%d\n", a[i]);
	}

	//printf("%d\n", n);
	//for (i = m + 1; i < 10; i++) {
	//	printf("%d\n", a[i]);
	//}
}