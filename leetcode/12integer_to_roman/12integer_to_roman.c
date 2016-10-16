/*
12. Integer to Roman
Given an integer, convert it to a roman numeral.
Input is guaranteed to be within the range from 1 to 3999.
给定一个整数，将其转换为罗马数字。
输入被保证是从1到3999的范围内。
*/
//Ⅰ、Ⅱ、Ⅲ、Ⅳ、Ⅴ(5)、Ⅵ、Ⅶ、Ⅷ、Ⅸ、Ⅹ(10)、Ⅺ、Ⅻ、L(50)，C(100)，D(500)，M(1000)。
#include<stdio.h>

int Single_digits1(int a) {
	if (a == 0)
		printf("\n");
	else if (a == 1)
		printf("Ⅰ\n");
	else if (a == 2)
		printf("Ⅱ\n");
	else if (a == 3)
		printf("Ⅲ\n");
	else if (a == 4)
		printf("Ⅳ\n");
	else if (a == 5)
		printf("Ⅴ\n");
	else if (a == 6)
		printf("Ⅵ\n");
	else if (a == 7)
		printf("Ⅶ\n");
	else if (a == 8)
		printf("Ⅷ\n");
	else if (a == 9)
		printf("Ⅸ\n");

}

int aaa(int number) {
	if (number < 50) {
		int b = number / 10;
		if (b == 1) {
			printf("L");
			printf("Ⅹ");
		}
		else if (b == 2) {
			printf("L");
			printf("ⅩⅩ");
		}
		else if (b == 3) {
			printf("L");
			printf("ⅩⅩⅩ");
		}
		else if (b == 4) {
			printf("ⅩC");
		}
		int c = number % 10;
		Single_digits1(c);
	}
	else if (number == 50) {
		printf("L\n");
	}
}
int main() {
	int number;
	int a, b, c, d;
	while (scanf("%d", &number) != EOF) {
		if (number <= 10) {
			if (number < 10) {
				a = number % 10;
				Single_digits1(a);
			}
			else if (number == 10) {
				printf("Ⅹ\n");
			}
		}
		else if (number <= 50) {
			if (number < 50) {
				b = number / 10;
				if (b == 1)
					printf("Ⅹ");
				else if (b == 2)
					printf("ⅩⅩ");
				else if (b == 3)
					printf("ⅩⅩⅩ");
				else if (b == 4)
					printf("ⅩL");
				c = number % 10;
				Single_digits1(c);
			}
			else if (number == 50) {
				printf("L\n");
			}
		}
		else if (number <= 100) {
			if (number < 100) {

				int a1 = number - 50;
				aaa(a1);
			}
			else if (number == 100)
				printf("C\n");
		}
		else if (number <= 500) {
			if (number < 500) {
				int vv;
				vv = number / 100;
				if (vv == 1) {
					printf("C");
				}
				else if (vv == 2) {
					printf("CC");

				}
				else if (vv == 3) {
					printf("CCC");
				}
				else if (vv == 4) {
					printf("CD");
				}
			}
			else if (number == 500)
				printf("D\n");
		}
		else if (number < 1000) {
		}
		else if (number < 4000) {
		}

	}

	return 0;
}