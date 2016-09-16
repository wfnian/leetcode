#include<stdio.h>
int main() {
	int a[10], i,average;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int aver(int n[]);
	average = aver(a);
	printf("%d\n", average);

	return 0;

}
int aver(int n[10]) {
	int i, sum=0;
	for (i = 0; i < 10; i++) {
		sum += n[i];
	}

	return sum / 10;
}