#include<stdio.h>
int main() {
	int f1 = 1, i, f2 = 1, f3;
	printf("%d\t%d\t", f1, f2);
	for (i = 3; i < 20; i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		printf("%d\t", f3);
		if (i % 4 == 0)
			printf("\n");
	}

	return 0;

}