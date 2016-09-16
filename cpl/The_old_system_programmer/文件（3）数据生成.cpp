#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	FILE*fp;
	int i,j,a[12][12],x;
	srand(time(0));
	fp=fopen("f:\\xm3.txt","w");
	if(NULL==fp){
		printf("FILE NOT OPEN!");
		return 1;
	}
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			a[i][j]=rand()%100;
		}
	}
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
		fprintf(fp,"%d\t",a[i][j]);
	fprintf(fp,"\n");	
	}
	fclose(fp);
	printf("\n");
}
