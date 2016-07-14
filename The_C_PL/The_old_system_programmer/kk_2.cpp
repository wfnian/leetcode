#include<stdio.h>
int main(){
	FILE*fp;
	fp=fopen("f:\\kk.txt","w");
	char c[36];
	gets(c);
	if(fp==NULL){
		printf("FILE NOT OPEN!");
		return 9;
	}
		fprintf(fp,c);
}
