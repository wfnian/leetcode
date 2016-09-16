#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
int main() {
	int a, b;
	scanf("%d", &a);
	int jc(int a);
	b = jc(a);
	printf("%d\n", b);

	return 0;


}
int jc(int a) {
	int i, s = 1;
	for (i = a; i >= 1; i--) {
		s *= i;
	}

	return s;

}