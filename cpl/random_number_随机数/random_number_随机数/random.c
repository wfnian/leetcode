#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	int a, b;
	srand(time(0));
	a = rand() % 10;
	b = rand() % 100;
	printf("%d %d\n", a, b);

	return 0;

}