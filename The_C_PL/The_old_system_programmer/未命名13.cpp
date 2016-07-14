#include<stdio.h>
int main(){
	char c;
	FILE*fpa;
	FILE*fpb;
	fpa=fopen("f:\\kk.txt","r");
	fpb=fopen("f:\\kk_1.txt","w");
	if(fpa==NULL){
		printf("FILE NOT OPEN!");
		return 9;
	}	if(fpb==NULL){
		printf("FILE NOT OPEN!");
		return 9;
	}
	while(!feof(fpa)){
		c=getc(fpa);
		fputc(c,fpb);
	}
}
