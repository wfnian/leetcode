/*
计算一个合法括号字符串的P序列。括号字符串的P序列是由每个右括号与其对应左括号之间的右括号个
数排列而成的。 例如，括号字符串“((()(())))”的P序列为：“1 1 2 4 5”。
输入
一组合法的括号字符串，每个括号字符串一行。
输出
每个括号字符串的P序列输出一行，每个数值后有一个空格。
样例输
(())
((()(())))
样例输出
1 2 
1 1 2 4 5 
*/#include<stdio.h>
#include<string.h>
int main() {
	char str[256];
	int Len = strlen(str);
	int i, a, b, j;
	while (scanf("%s", str) != EOF) {
		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] == ')') {
				a = i;
			}
			for (j = a - 1; j > -1; j--) {
				if (str[j] == '(') {
					 printf("%d ", a - j);
					break;
				}
			}

		}
		printf("\n");
	}
}
