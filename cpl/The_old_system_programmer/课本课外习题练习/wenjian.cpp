#include<stdio.h>
#include<stdlib.h>
int main(){
	char c;
	FILE*fp;
	fp=fopen("wenjian.cpp","r");
	if(NULL==fp){
		printf("NOT OPEN!\n");
		system("pause");
		return 13;
	  }
	else while(!feof(fp)){
		c=fgetc(fp);
		putchar(c);
 }
} 
