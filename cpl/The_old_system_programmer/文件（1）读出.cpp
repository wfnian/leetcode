#include<stdio.h>
int main(){
	FILE*fp;
	char c;
	fp=fopen("f:\\xm1.txt","r");
	if(NULL==fp){
		printf("FILE NOT OPEN!");
		return 1;
	}
	while(!feof(fp)){
		c=fgetc(fp);
		putchar(c);
	}
	fclose(fp);
} 	 
