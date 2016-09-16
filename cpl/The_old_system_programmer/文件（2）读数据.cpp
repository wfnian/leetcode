#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	FILE*fp;
	int i,j,a[128][128],x;
	srand(time(0));
	fp=fopen("f:\\xm2.txt","r");
	if(NULL==fp){
		printf("FILE NOT OPEN!");
		return 1;
	}
	for(i=1;i<=8;i++){
		fscanf(fp,"%d",&x);
		printf("%d ",x);
	}
	fclose(fp);
}
