#include<omp.h>
#include<Windows.h>
#include<iostream>

int main() {
#pragma omp parallel for
	for (int i = 0; i < 10; i++) {
		printf("Hello World!%d\n", i);
	}
}