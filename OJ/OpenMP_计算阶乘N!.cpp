#include<stdio.h>
#include<omp.h>
#include<Windows.h>

#define MAXSIZE 5

int main() {
	int i;
	long long sum = 1;
	int a = 1;
#pragma omp parallel for
	for (i = 1; i <= MAXSIZE; i++)
	{
		sum = i*sum;
	}
	printf("%lld\n", sum);

	return 0;

}