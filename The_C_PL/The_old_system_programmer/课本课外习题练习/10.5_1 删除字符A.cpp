#include<stdio.h>
int m(char a[],char A);
int main(){
	char c[30];
	char b;
	gets(c);
	scanf("%c",&b);
	m(c,b);
	return 0;
}
int m(char M[],char B){
	int i,j;
	char newa[29];
	for(j=0,i=0;M[i]!='\0';i++)
		if(M[i]!=B)
	    	newa[j++]=M[i];
	newa[j]='\0';
	puts(newa);
}
