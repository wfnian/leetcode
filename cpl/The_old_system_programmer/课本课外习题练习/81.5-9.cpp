#include<stdio.h>
int main(){
	char str[10];
	int i,digit;
	for(i=0;i<10;i++)
	scanf("%c",&str[i]);
	digit=0;
	for(i=0;i<10;i++)
		if(str[i]>='0'&&str[i]<='9')
			digit++;
			printf("%d",digit);
	return 0;
}
