#include<stdio.h>
int main(){
	FILE*fp;
	char c;
	fp=fopen("f:\\kk.txt","r");
	if(fp==NULL){
		printf("FILE NOT OPEN!");
		return 9;
	}
	while(!feof(fp)){
		c=fgetc(fp);
		putchar(c);
	}
	fclose(fp);
	
}
