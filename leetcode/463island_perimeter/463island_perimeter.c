//https://leetcode.com/problems/island-perimeter/#/description
#include<stdio.h>
#include<malloc.h>

int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
	int perimeter = 0;
	int i, j;
	for (i = 0; i < gridRowSize; i++) {
		for (j = 0; j < gridColSize; j++) {
			if (grid[i][j] == 1) {
				if (i - 1 < 0 || grid[i - 1][j] == 0)
					perimeter++;
				if (j - 1 < 0 || grid[i][j - 1] == 0)
					perimeter++;
				if (i + 1 > gridRowSize - 1 || grid[i + 1][j] == 0)
					perimeter++;
				if (j + 1 > gridColSize - 1 || grid[i][j + 1] == 0)
					perimeter++;
			}
		}
	}
	return perimeter;
}
int main(void) {
	int grid[4][4] = { {0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0} };
	//int grid[1][2] = { {1,0} };
	int perimeter = 0;
	int  gridRowSize = 4;//2
	int  gridColSize = 4;//1
	int i, j;
	for (i = 0; i < gridRowSize; i++) {
		for (j = 0; j < gridColSize; j++) {
			if (grid[i][j] == 1) {
				if (i - 1 < 0 || grid[i - 1][j] == 0)
					perimeter++;
				if (j - 1 < 0 || grid[i][j - 1] == 0)
					perimeter++;
				if (i + 1 > gridRowSize - 1 || grid[i + 1][j] == 0)
					perimeter++;
				if (j + 1 > gridColSize - 1 || grid[i][j + 1] == 0)
					perimeter++;
			}
		}
	}
	printf("%d\n", perimeter);
}