/*
Input: [1,2,3],[2]
Output: 1
Input: [1,2,3,4],[1,4]
Output: 1
[1,2,3,4,5,6],[1,3,5]
*/

#include<stdio.h>
#include<malloc.h>
int findRadius(int* houses, int housesSize, int* heaters, int heatersSize) {
	return 0;
}
int main() {
	int i, j;
	int *houses = (int*)malloc(sizeof(int)), *heaters = (int*)malloc(sizeof(int));
	int housesSize, heatersSize;
	scanf("%d%d", &housesSize, &heatersSize);
	for (i = 0; i < housesSize; i++)
		scanf("%d", &houses[i]);
	for (i = 0; i < heatersSize; i++)
		scanf("%d", &heaters);
	int sub;
	i = 0;
	sub = (houses[heaters[i]] - houses[heaters[i + 1]]) / 2;
	printf("%d\n", sub);
	
}