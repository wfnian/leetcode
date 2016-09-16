#include<stdio.h>
int main(){
	char a[1024];
	char*p;
	gets(a);
	int i;
	p=&a[0];
	int b=0;
	for(p=a;*p!='\0';p++)
		b++;
	printf("%d",b);
}
