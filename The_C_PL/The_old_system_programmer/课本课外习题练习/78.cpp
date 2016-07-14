#include<stdio.h>
int main(){
	int a[3][4]={9,18,-24,34,0,17,-76,67,83,48,100,23};
	int max,row,col,i,j;
	printf("The 3*4 array:\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%5d",a[i][j]);
	
		}
				printf("\n");
	}
	max=a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(max<a[i][j]){
				max=a[i][j];
				row=i;
				col=j;
			}
		}
	}
	printf("%d\t%d\t%d\t",max,row,col);
}
