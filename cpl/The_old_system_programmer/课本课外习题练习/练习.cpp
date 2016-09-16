#include<stdio.h>
int main(){
	char c;
	printf("请输入一个字符：\n");
	c=getchar();
	if(c<='z'&&c>='a'||c<='Z'&&c>='A')
		printf("输入字母%c的ASCII码为：%d",c,c);
	else
		 printf("输入的%c不是英文字母\n",c);
	return 0;
} 
