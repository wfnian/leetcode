#include<stdio.h>
int main(){
	int i;
	char ch[3][128]={"This is a point","This is a string","It is a array"};
	char*cp[4];
	char s='A';
	for(i=0;i<3;i++)
		cp[i]=ch[i];
		cp[3]=&s;
		for(i=0;i<3;i++)
		puts(*(cp+i));
		putchar(*cp[3]);
	
}
