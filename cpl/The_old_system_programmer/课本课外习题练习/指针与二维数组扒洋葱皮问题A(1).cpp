#include<stdio.h>
int main(){
	int M,i,j;
	int(*p)[2];
	int a[4][4],b[2][2];
		p=b;
	scanf("%d",&M);
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			a[i][j]=M;
			M++;
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			b[i][j]=a[i+1][j+1];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
}
