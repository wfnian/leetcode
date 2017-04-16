#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}
int missingNumber(int* nums, int numsSize) {
	qsort(nums, numsSize,sizeof(nums[0]),cmp);
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] != i)
			return i;
	}
	return;
}

int main() {
	int nums[5] = { 1,2,5,3,4 };
	printf("%d\n", missingNumber(nums, 5));
	return 0;
}