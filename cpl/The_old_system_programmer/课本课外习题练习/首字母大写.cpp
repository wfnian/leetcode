#include<stdio.h>
int main(){
	char a[1024];
	int i;
	gets(a);
	a[0]-=32;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
		a[i+1]-=32;
		}
	}
	puts(a);
	return 0;
} 
