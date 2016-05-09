#include<stdio.h>
int main() {
	int i, j, a, M;
	/*scanf("%d", &M);*/
	for (a =1; a < 220; a++) {
		 M = 0;
		for (i = 0; i <= a; i++) {
			for (j = 0; j <= a; j++) {
				if (i*j == a) {
					//printf("%d ", j);
					M += j;
				}
			}
		}
		//printf("\n");
		if (M == a)
			printf("%d ", a);
	}
}

/*#include <stdio.h>
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
}*/