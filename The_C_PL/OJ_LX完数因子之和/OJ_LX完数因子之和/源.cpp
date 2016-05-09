//#include<stdio.h>
//int main() {
//	int i;
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//
//	}
//}
#include <stdio.h>
int main()
{
	int i, j;
	int sum;
	for (i = 1; i <= 1000; i++)
	{
		sum = 0;
		for (j = 1; j<i; j++)
		{
			if (i%j == 0)
				sum += j;
		}
		if (sum == i)
		{
			printf("%d its factors are ", i);
			for (j = 1; j<i; j++)
			{
				if (i%j == 0)
					printf("%d ", j);
			}
			printf("\n");
		}
	}
}