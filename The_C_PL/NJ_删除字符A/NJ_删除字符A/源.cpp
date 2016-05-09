/*
							删除字符A
试题描述
   用字符数组作函数参数，编程实现以下功能：在字符串中删除与某个指定字符相同的字符。
输入
   输入包含两行： 
   第一行是字符串，长度不超过20。 
   第二行是一个指定字符。
输出
   输出删除后的字符串。
输入示例
   I am a student 
   a
输出示例
   I m  student
数据范围
   输入输出均为字符串，并且长度不超过20
*/
//#include<stdio.h>
//#include<string.h>
//int charc(char c[], char a);
//int main() {
//	char str[22];
//	char c, a[22];
//	int i;
//	scanf("%s%c", str, &c);
//	a[22]=charc(str, c);
//	puts(a);
//	return 0;
//}
//int charc(char c[],char a) {
//	int len;
//	char v[22], b[22];
//	len = strlen(c);
//	int i;
//	for (i = 0; i < len; i++) {
//		b[i] = c[i];
//		if (c[i] == a) 
//		break;
//		
//	}
//	return b[i];
//	//(b);
//}
#include<stdio.h>
int m(char a[], char A);
int main() {
	char c[30];
	char b;
	gets_s(c);
	scanf("%c", &b);
	m(c, b);
	return 0;
}
int m(char M[], char B) {
	int i, j;
	char newa[29];
	for (j = 0, i = 0; M[i] != '\0'; i++)
		if (M[i] != B)
			newa[j++] = M[i];
	newa[j] = '\0';
	puts(newa);
}