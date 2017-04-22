#include<stdio.h>
#include<malloc.h>
/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
int BinarySearch(int list[], int SearchNum, int left, int right) {
	int middle, ans;
	while (left<=right)
	{
		middle = (left + right) / 2;
		if (SearchNum < list[middle])
		{
			ans = middle;
			middle /= middle + left;
			if (list[middle] > SearchNum)
				;
			else {
				return ans;
			}
		}
		else if (SearchNum > list[middle]) 
		{
			left = middle + 1;
		}
		else return middle;
	}
	return -1;
}

int* twoSum(int* nums, int numsSize, int target) {

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
		int SearchNum;
		scanf("%d", &SearchNum);
		//twoSum(nums, numsSize, target);
		printf("%d\n@@", BinarySearch(nums, SearchNum, 0, numsSize));
	}
}