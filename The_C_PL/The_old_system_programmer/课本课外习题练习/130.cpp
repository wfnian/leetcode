#include<stdio.h>
int main(){
	char str[128],*cp;
	int d=0;
	gets(str);;
	for(cp=str;*cp!='\0';cp++){
		if(*cp>='0'&&*cp<='9')
				d++;
	}
	printf("\t\t%d\n\t",d);
}
