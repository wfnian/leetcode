#include<stdio.h>
int main() {
	int i,j,n=2;
	for (i = 2; i < 100; i++) {
		for (j = i; j < 100;j++)
			if (j%i!=0) {
				printf("%d ", j);
			}
	}
}