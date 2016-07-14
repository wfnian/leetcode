#include<stdio.h>
int main(){
	int a[4][4],b[2][2];
	int*p;
	int i,j,I,J;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		b[i][j]=a[i+1][j+1];
		}
	}
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",b[i][j]);
	
		}
		printf("\n");
	}
}
