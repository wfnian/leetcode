/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
#include<stdio.h>
#include<malloc.h>
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

void quicksort(int x[], int, int);
void quicksort(int x[], int first, int last) {
	int pivot, j, temp, i;

	if (first<last) {
		pivot = first;
		i = first;
		j = last;

		while (i<j) {
			while (x[i] <= x[pivot] && i<last)
				i++;
			while (x[j]>x[pivot])
				j--;
			if (i<j) {
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}

		temp = x[pivot];
		x[pivot] = x[j];
		x[j] = temp;
		quicksort(x, first, j - 1);
		quicksort(x, j + 1, last);

	}
}
char** findRelativeRanks(int* nums, int numsSize, int* returnSize) {
	int *NUM1 = (int*)malloc(sizeof(int)*100);
	int *NUM = (int*)malloc(sizeof(int) * 100);
	int *c = (int*)malloc(sizeof(int) * 100);
	//memcpy( NUM,nums, sizeof(nums));
	NUM1 = nums;
	quicksort(NUM1, 0, numsSize);
	for (int i = 1; i <= numsSize; i++) {
		NUM[numsSize-i+1] = NUM1[i];
	}
	int count = 0;
	for (int i = 1; i <= numsSize; i++) {
		for (int j = 1; j <= numsSize; j++) {
			if (NUM[j] == nums[i]) {
				c[count++] = j + 1;
			}
		}
	}
	for (int i = 1; i <= numsSize; i++) {
		printf("%d ", c[i]);
	}
	return;
}
int main() {
	int nums[1000], numsSize,size;
	int i;
	scanf("%d", &numsSize);
	for (i = 1; i <= numsSize; i++) {
		scanf("%d", &nums[i]);
	}
	findRelativeRanks(nums, numsSize, &size);
	//quicksort(nums, 0, numsSize);
	/*for (i = 1; i <= numsSize; i++) {
		printf("%d ", nums[i]);
	}*/
}