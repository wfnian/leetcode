#include<stdio.h>
int main(){
	FILE*fp;
	fp=fopen("f:\\新建文件文件.txt","w");
	fprintf(fp,"hello王方年！"); 
	fclose(fp);
}
