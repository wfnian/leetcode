#include<stdio.h>
int main(){
	int a[12],i;
	FILE*fp;
	fp=fopen("f:\\kk.txt","r");
	if(fp==NULL){
		printf("FILE NOT OPEN!");
		return 9;
	}
	while(!feof(fp)){
		for(i=0;i<8;i++){
			fscanf(fp,"%d",&a[i]);
		}
	for(i=0;i<8;i++){
			printf("%d ",a[i]);
		}
	}
} 
