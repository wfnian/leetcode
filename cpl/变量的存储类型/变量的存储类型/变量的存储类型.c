#include<stdio.h>
int main() {
	register int i;
	auto int sum = 0;
	for (i = 0; i < 10; i++) {
		sum += i*i;
	}
	printf("%d\n", sum);

	return 0;

}