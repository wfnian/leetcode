#include<stdio.h>
int main(){
	char c[36],*p;
	int n=0;
	gets(c);
	for(p=c;*p!='\0';p++){
		if(*p<='9'&&*p>='0')
		n++;
	}
	printf("%d \n",n);
}
