#include<stdio.h>
int main(){
	char a[1024];
	gets(a);
	char*p;
//	*p=&a;
	int i,flag=0;
	for(p=a;*p!='\0';p++)
		if(*p>='a'&&*p<='z')
		  flag=1;
		printf("TRUE");
	if(flag==0) 
		printf("FALSE");
	
}
