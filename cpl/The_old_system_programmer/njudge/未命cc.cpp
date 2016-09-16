#include<stdio.h>
int mmm(char x[1024],char y){
	int i,j;
	for(i=0;x[i]!='\0';i++)
		if(x[i]==y)
		x[i]=' ';
		puts(x);
}
int main(){
	char a[1024];
	gets(a);
	char b;
	scanf("%c",&b);
	mmm(a,b);
	return 0;
	
}
