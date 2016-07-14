#include<stdio.h>
#include<Windows.h>
#include<istream>
#include<omp.h>
int global = 0;
#pragma omp threadprivate(global)
int main() {
	global = 1000;
#pragma omp parallel copyin(global)
	{
		printf("global = %d\n", global);
		global = omp_get_thread_num();
	}
	printf("global = %d\n", global);
	printf("parallel again\n");
#pragma omp parallel
	printf("global = %d\n", global);

}