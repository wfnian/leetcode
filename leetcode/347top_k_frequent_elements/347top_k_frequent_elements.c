#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct strs {
	int b;
	int c;
}STR;
STR M[700011], NUM[701011], MF;
int digit[190];
void quickSort(int a[], int left, int right)
{
	int i = left;
	int j = right;
	int temp = a[left];
	if (left >= right)
		return;
	while (i != j)
	{
		while (i<j&&a[j] >= temp)
			j--;
		if (j>i)
			a[i] = a[j];//a[i]已经赋值给temp,所以直接将a[j]赋值给a[i],赋值完之后a[j],有空位
		while (i<j&&a[i] <= temp)
			i++;
		if (i<j)
			a[j] = a[i];
	}
	a[i] = temp;//把基准插入,此时i与j已经相等R[low..pivotpos-1].keys≤R[pivotpos].key≤R[pivotpos+1..high].keys
	quickSort(a, left, i - 1);/*递归左边*/
	quickSort(a, i + 1, right);/*递归右边*/
}
int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
	int i, j,t;
	quickSort(nums,0,numsSize);
	for (j = 1,i = 0;j<=numsSize;j++, i++) {
		nums[i] = nums[j];
	}
	/*for (i = 0; i < numsSize; i++)
		printf("%d ", nums[i]);
	printf("\n");*/
	int digitSize = 0;
	digit[0] = nums[0];
	for (i = 0; i < numsSize; i++) {
		if (nums[i] != digit[digitSize]) {
			digit[++digitSize] = nums[i];
		}
	}
	digitSize++;
	//for (i = 0; i < digitSize; i++) {
	//	printf("%d ", digit[i]);
	//}
	//printf("\n");
	for (i = 0; i < digitSize; i++) {
		M[i].b = 0;
		M[i].c = 0;
	}
	for (i = 0; i < numsSize; i++)
		for (j = 0; j <  digitSize; j++)
			if (nums[i] == digit[j]) {
				M[j].b++;
				M[j].c = digit[j];
			}
	for (j = 0, i = 0; i < digitSize; i++)
		if (M[i].b != 0) NUM[j++] = M[i];
	int VV = j;
	for (i = 0; i<VV; i++)
	{
		for (j = 0; j<VV - i - 1; j++)
		{
			if (NUM[j].b<NUM[j + 1].b)
			{
				MF = NUM[j];
				NUM[j] = NUM[j + 1];
				NUM[j + 1] = MF;
			}
		}
	}
	int* uniqueNums = (int *)malloc(sizeof(int) * numsSize);
	*returnSize = k;
	for (i = 0; i < k; i++) {
		uniqueNums[i] = NUM[i].c;
	}
	return uniqueNums;
}

//

//
int main() {
	int *nums = (int*)malloc(sizeof(int)*90);
	int *returnsize = (int*)malloc(sizeof(int)*100);
	int n;
	while (scanf_s("%d",&n)) {
		int k;
		for (int i = 0; i < n; i++) 
			scanf_s("%d", &nums[i]);
		scanf_s("%d", &k);
		returnsize = topKFrequent(nums, n, k, returnsize);
		for (int i = 0; i < k; i++) {
			printf("%d ", returnsize[i]);
		}
		/*free(returnsize);
		free(nums);*/
	}
}
/*#include<stdio.h>
void quickSort(int a[], int left, int right)
{
	int i = left;
	int j = right;
	int temp = a[left];
	if (left >= right)
		return;
	while (i != j)
	{
		while (i<j&&a[j] >= temp)
			j--;
		if (j>i)
			a[i] = a[j];//a[i]已经赋值给temp,所以直接将a[j]赋值给a[i],赋值完之后a[j],有空位
		while (i<j&&a[i] <= temp)
			i++;
		if (i<j)
			a[j] = a[i];
	}
	a[i] = temp;//把基准插入,此时i与j已经相等R[low..pivotpos-1].keys≤R[pivotpos].key≤R[pivotpos+1..high].keys
	quickSort(a, left, i - 1);/*递归左边*/
//	quickSort(a, i + 1, right);/*递归右边*/
//}
//
//int main()
//{
//	int a[9] = { 8,2,6,12,1,9,5,5,10 };
//	int i;
//	quickSort(a, 0, 8);/*排好序的结果*/
//	for (i = 0; i<8; i++)
//		printf("%4d", a[i]);
//	getchar();
//	return 0;
//}*/
