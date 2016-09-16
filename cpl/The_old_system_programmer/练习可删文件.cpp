#include<stdio.h>
int main(){
	char c[128];
	gets(c);
	FILE*fp=fopen("f:\\xin.txt","w");
	fputc(c,fp);
	fclose(fp);
} 
