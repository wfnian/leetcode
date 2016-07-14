#include<stdio.h>
int main(){
	char a[1024];
	gets(a);
	char*p;
	int i,flag,flg;
	for(p=a;*p!='\0';p++)
		if(*p>='a'&&*p<='z')
		  flag=1;
		else if(*p<='a'&&*p>='z')
		  flg=1;
	if(flag=1)
		printf("TRUE");
	else if(flg=0)
		printf("FALSE");
	
}
