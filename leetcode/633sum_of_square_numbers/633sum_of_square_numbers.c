#include"stdio.h"
#include"stdbool.h"
#include"math.h"
//is there two number A and B can make C that A^2+B^2 = C?  C is known.
bool judgeSquareSum(int c) {//a^2 + b^2 = c
	int b;
	for (size_t i = 0; i <= c; i++) {
		b = (int)sqrt(c - i*i);
		if (b*b + i*i == c)
			return true;
		if (i*i > c)
			break;
	}
	return false;
}

int main() {
	printf("%d\n", judgeSquareSum(3));
	printf("%d\n", judgeSquareSum(0));
	printf("%d\n", judgeSquareSum(1));
	printf("%d\n", judgeSquareSum(2));
	printf("%d\n", judgeSquareSum(4));
	printf("%d\n", judgeSquareSum(5));
}