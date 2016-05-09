#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int a;
	srand(time(0));
	a = time(0)%10;
	printf("%d\n", a);

	return 0;

}