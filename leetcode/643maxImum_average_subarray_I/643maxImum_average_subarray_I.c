////////////////////////////////////////////////////////////////
/*
Given an array consisting of n integers, find the contiguous 
subarray of given length k that has the maximum average value. 
And you need to output the maximum average value.

Input: [1,12,-5,-6,50,3], k = 4
Output: 12.75
Explanation: Maximum average is (12-5-6+50)/4 = 51/4 = 12.75
*/
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<limits.h>

double findMaxAverage(int* nums, int numsSize, int k) {//as same as the first answer of leecode but this solution waste too much time
	int sum = 0, max = INT_MIN;
	for (size_t i = 0; i < numsSize - k + 1; i++) {
		sum = 0;
		for (size_t j = 0; j < k; j++)
			sum += nums[i + j];
		if (sum>max) max = sum;
	}
	return (double)max / k;
}

int main()
{
	int a[10] = { 0,-1,-1,-3,-3 };
	
	int aa[222] = { 8860, -853, 6534, 4477, -4589, 8646, -6155, -5577, -1656, -5779, -2619, -8604, -1358, -8009, 4983, 7063, 3104, -1560, 4080, 2763, 5616, -2375, 2848, 1394, -7173, -5225, -8244, -809, 8025, -4072, -4391, -9579, 1407, 6700, 2421, -6685, 5481, -1732, -8892, -6645, 3077, 3287, -4149, 8701, -4393, -9070, -1777, 2237, -3253, -506, -4931, -7366, -8132, 5406, -6300, -275, -1908, 67, 3569, 1433, -7262, -437, 8303, 4498, -379, 3054, -6285, 4203, 6908, 4433, 3077, 2288, 9733, -8067, 3007, 9725, 9669, 1362, -2561, -4225, 5442, -9006, -429, 160, -9234, -4444, 3586, -5711, -9506, -79, -4418, -4348, -5891 };
	int aaa[10] = { 1,12,-5,-6,50,3 };
	printf("%f\n", findMaxAverage(aa, 93, 93));
	printf("%f\n", findMaxAverage(a, 5, 4));
	printf("%f\n", findMaxAverage(aaa, 6, 4));
	return 0;
}