#include<stdio.h>
#include<stdlib.h>
int main(){
	char c[1024];
	gets(c);
	int i;
	for(i=0;c[i]!='\0';){
		i++;
	}
	printf("%d",i);
} 
