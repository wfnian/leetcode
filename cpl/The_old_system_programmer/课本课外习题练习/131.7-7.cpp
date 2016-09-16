#include<stdio.h>
int main(){
	char str[128];
	char*p;
	int i=0;
	gets(str);
	for(p=str;*p!='\0';p++)
	if(*p>='0'&&*p<='9')
		i++;
		printf("%d\n\n\n\n\n",i);
}
