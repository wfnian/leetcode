#include "stdio.h"
int main(){
	FILE*fp=fopen("f:\\xm6...txt","w");
	fprintf(fp,"新的文件！");
	fclose(fp);  
}
