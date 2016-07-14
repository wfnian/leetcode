#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	FILE*fpa;
	FILE*fpb;
	char c;
	fpa=fopen("f:\\xm4_1.txt","r");
	fpb=fopen("f:\\xm4_2.txt","w");
	if(fpa==NULL){
		printf("FILE NOT OPEN");
		return 1;
	}
		if(fpb==NULL){
		printf("FILE NOT OPEN");
		return 1;
	}
	while(!feof(fpa)){
		c=fgetc(fpa);
		fputc(c,fpb);
	}

	fclose(fpa);
	fclose(fpb);
}
