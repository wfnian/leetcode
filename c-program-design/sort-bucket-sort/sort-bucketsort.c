#include<stdio.h>
#include<string.h>
#define Local
int a[100];

void bucketsort(int n) {
	
}
int main() {
	int n, t;
//#ifdef Local
//	if (!freopen("data.in", "r", stdin))
//		printf("Error!!\n");
//	freopen("data.in", "r", stdin);
//	if (!freopen("data2.out", "w", stdout))
//		printf("Error!!\n");
//#endif // Local
	memset(a, 0, sizeof(int));
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &t);
		a[t++];
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= a[i]; j++)
			printf("%d ", i);
	return 0;

}//data.in 11 -1 6 2 3 5 4 7 9 8 1 0