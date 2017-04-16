#include<stdio.h>
#include<math.h>
//const int minutes[6] = { 1,2,4,8,16,32 };
//const int houre[4] = { 1,2,4,8 };
char** readBinaryWatch(int num, int* returnSize) {
	if (num > 9 || num < 0)
		return 0;
	else {
		int i, j;
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 3; j++) {
				if (i + j > num)
					break;
				printf("%d:", (int)(pow(2, j)));
				printf("%d\t", (int)(pow(2, i)));
			}
		}
	}
	return *returnSize;
}
int main(void) {
	int size;
	char **read = readBinaryWatch(1, &size);
	
	return 0;
}