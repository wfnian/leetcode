#include<Windows.h>
#include<omp.h>
#include<istream>
#include<stdio.h>
int main() {
	int counter = 0;
#pragma omp parallel
	{
	for (int i = 0; i < 100; i++) {
#pragma omp atomic
		counter++;
	}
	printf("counter = %d \n", counter);
	}
}