#include<stdio.h>
#include<string.h>
int main(){
	char a[36];
	int i,j,k;
	gets(a);
	k=strlen(a);
	for(i=k;i>0;i--){
		a[i*2]=a[i];
		a[i*2-1]=' ';
	}
	puts(a);
} 
