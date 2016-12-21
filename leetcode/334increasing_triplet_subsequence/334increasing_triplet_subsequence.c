/*
334. Increasing Triplet Subsequence   
Given an unsorted array return whether an increasing subsequence of length 3 exists or not in the array.
Formally the function should:
Return true if there exists i, j, k
such that arr[i] < arr[j] < arr[k] given 0 ¡Ü i < j < k ¡Ü n-1 else return false.
Your algorithm should run in O(n) time complexity and O(1) space complexity.
Examples:
Given [1, 2, 3, 4, 5],
return true.
Given [5, 4, 3, 2, 1],
return false.
*/
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdbool.h>
//int* nums;
int numsSize;
bool increasingTriplet(int* nums, int numsSize) {
	int i, sum1 = 1, sum2 = 1, max = 1;
	for (i = 1; i < numsSize; i++) {
		if (nums[i] >= nums[i - 1]) {
			sum1++;
			if (sum1 > max)
				max = sum1;
			if (max >= 3)
				return true;
		}
		else sum1 = 1;
	}
	return false;
}
//int main() {
//	scanf("%d", &numsSize);
//	int i;
//	int nums[20];
//	for (i = 0; i < numsSize; i++)
//		scanf("%d", &nums[i]);
//	int sum = 0, mark = 0,max = -1;
//	for (int j = 1; j < numsSize ; j++) {
//		if (nums[j] >= nums[j - 1]) {
//			sum++;
//		}
//		else { 
//			if (sum > max)
//				max = sum;
//		sum = 0;
//		}
//		
//	}
//	printf("%d %d\n", sum, max);
//}
#include<stdio.h>
int nums[5005];
int main() {
	int numsSize; /* *nums = (int*)malloc(sizeof(int))*/;
		while (scanf("%d", &numsSize) != EOF) {
		int i, sum1 = 1, sum2 = 1, max = 1;
		for (i = 0; i < numsSize; i++)
			scanf("%d", &nums[i]);
		printf("%s\n",increasingTriplet(nums, numsSize));
		//printf("%d\n", max);
	}
}
//7 1 2 3 1 2 3 4