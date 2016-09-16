#include<stdio.h>
int main(){
	int a[4][4];
	int b[2][2];
	int i,j,k,l;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d \n",a[i][j]);
		}
		
	}
}
