//#include "stdafx.h"
#include"omp.h"
#include<stdio.h>


	
	/*printf("Hello from serial.\n");
	printf("Thread number = %d \n", omp_get_thread_num());
#pragma omp parallel
	{
		printf("Hello from parallel.Thread number = %d\n", omp_get_thread_num());
	}
	printf("Hello from serial again.\n");*/

//	return 0;


int main()
{
#pragma omp parallel sections
#pragma omp section 
	printf("%d", omp_get_thread_num());
#pragma omp section
	printf("%d", omp_get_thread_num());
#pragma omp section
	printf("%d", omp_get_thread_num());
#pragma omp section 
	printf("%d", omp_get_thread_num());
	return 0;
}
