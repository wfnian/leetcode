#include<stdio.h>
#include<malloc.h>
int digit[100];
int removeDuplicates(int* nums, int numsSize) {
	int i, j;
	int digitSize = 0;
	digit[0] = nums[0];
	for (i = 0; i < numsSize; i++) {
		if (nums[i] != digit[digitSize]) {
			digit[++digitSize] = nums[i];
		}
	}
	digitSize++;
	for (i = 0; i < digitSize; i++) {
		nums[i] = digit[i];
	}
	return 0;
}
int main() {
	int a[10];
	int n;
	while (scanf("%d",&n))
	{
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		removeDuplicates(a, n);
	}
}