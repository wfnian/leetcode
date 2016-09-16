/*小明很喜欢学习C语言，可是刚入门的时候会犯很多低级错误，请帮他解决这些错误吧！
下面是小明编写的判断输入字母是否为小写字母的程序，请将程序修正后提交。
#include <stdio.h>
int main()
{
char c;
while(scanf("%c",c))
{
if('a' <= c <= 'z')
{
printf("y ");
}
else
{
printf("n ");
}
}
return 0;
输入
多个小写字母
输出
针对每个输入字母，如果是小写字母，输出y，否则输出n
样例输入
a1
样例输出
yn
*/
#include <stdio.h>

int main()
{
	char str[222];
	int i;
	while (scanf("%s", str) != EOF) {
		for (i = 0; str[i] != NULL; i++) {
			if (str[i] <= 'z'&&str[i] >= 'a')
				printf("y");
			else printf("n");
		}
	}
}