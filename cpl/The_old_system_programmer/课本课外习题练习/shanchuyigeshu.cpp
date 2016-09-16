#include<stdio.h>
int main(){
	char c[36],b,d[36];
	int i,j;
	gets(c);
	scanf("%c",&b);
	for(i=0,j=0;c[i]!='\0';i++){
		if(c[i]!=b){
			d[j++]=c[i];
		}
	}
	d[j]='\0';
	puts(d);
}
