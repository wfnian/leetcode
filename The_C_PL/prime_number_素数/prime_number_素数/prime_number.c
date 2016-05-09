#include<stdio.h>
int main() {
	int i, n,flag=1;
	scanf("%d", &n);
	for (i = 2; i < n; i++) {
		if (n%i == 0)
			break;
		else flag = 0;
	}
	if (flag == 0||n==2) {
		printf("It's a prime number!\n");
	}
	else  printf("It isn't a prime number!\n");

	return 0;

}