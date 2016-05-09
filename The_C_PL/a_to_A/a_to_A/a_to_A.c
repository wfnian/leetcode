#include"stdio.h"
int main() {
	char a, b;
	printf("请输入一个小写字母\n");
	scanf("%c", &a);
	b = a - 32;
	printf("%c\n", b);

	return 0;

}