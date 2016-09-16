#include<stdio.h>
int main(){
	int i,n,b,a[36];
	FILE*fp;
	fp=fopen("f:\\нд╪Ч\\file1.txt","r");
	if(fp==NULL){
		printf("FILE NOT OPEN!");
		return 9;
	}
	while(!feof(fp)){
		fscanf(fp,"%d",&n);
	for(i=0;i<n-1;i++){
		fscanf(fp,"%d",&a[i]);
	}
	}
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
} 
