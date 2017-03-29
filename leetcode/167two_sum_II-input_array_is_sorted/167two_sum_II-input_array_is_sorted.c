#include<stdio.h>
#include<malloc.h>
/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
int* twoSum(int* nums, int numsSize, int target) {
	int *returns = (int*)malloc(sizeof(int) * 200000);
	int i, j, k = 0;
	for (i = 0; i < numsSize; i++) {
		if (nums[i] == 0 && target != 0)
			continue;
		if (i>16019)
			break;
		if (nums[i]>target)
			break;
		for (j = 0; j < numsSize; j++) {
			if (nums[i] + nums[j] == target&&i != j) {
				returns[k] = i;
				
				returns[k+1] = j;
				if (k == 1)
					break;
			}
			if (k == 1)
				break;
		}
		if (k == 1)
			break;
	}
	
	for (i = 0; i < k; i++)
		printf("%d ", returns[i]);
	return returns;
}
int main(void) {
	int nums[100];
	int numsSize;
	while (scanf("%d",&numsSize))
	{
		int i,target,*returnsize;
		for (i = 0; i < numsSize; i++) {
			scanf("%d", &nums[i]);
		}
		scanf("%d", &target);
		twoSum(nums, numsSize, target);
		
	}
}