#include<stdio.h>
#include<math.h>
int findPairs(int* nums, int numsSize, int k) {

}

int main() {
	while (1) {
	int nums[100], numsSize, k, count = 0;
	int i, j;
	
		scanf("%d", &numsSize);
		for (i = 0; i < numsSize; i++) {
			scanf("%d", &nums[i]);
		}
		scanf("%d", &k);
		for (i = 0; i < numsSize; i++) {
			for (j = 0; j < numsSize; j++) {
				if (abs(nums[i] - nums[j]) == k&&i!=j) {
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	//findPairs(nums, numsSize, k);
}