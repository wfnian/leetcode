#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, *p;
	a = 17;
	p=&a;
	printf("%d ",p );
	free(p);
}