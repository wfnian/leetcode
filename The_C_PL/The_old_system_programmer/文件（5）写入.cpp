#include<stdio.h>
int main(){
	FILE*fp;
	fp=fopen("f:\\xm5.txt","w");
	char c[128];
	gets(c);
	if(fp==NULL){
		printf("FILE NOT OPEN");
		return 9; 
	}
	fprintf(fp,"%s",c);
	fclose(fp);
}
