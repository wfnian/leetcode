#include<stdio.h>
#define Local
int a[100];
void quicksort(int left,int right) {
	int i, j, t, temp;
	if (left > right) return;
	temp = a[left];
	i = left;
	j = right;
	while (i!=j)
	{
		while (temp <= a[j]&&i<j) {
			j--;
		}
		while (a[i]<=temp&&i<j)
		{
			i++;
		}
			t = a[i]; a[i] = a[j]; a[j] = t;
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(left, i - 1);
	quicksort(i + 1, right);
	
}
int main() {
	int n;
#ifdef Local
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif // Local
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf_s("%d", &a[i]);
	quicksort(1, n);
	for(int i  = 1;i<=n;i++)
		printf("%d ", a[i]);
	return 0;

}//data.in 10 6 2 3 5 4 7 9 8 1 0