#include<stdio.h>
#define N 5
#define M 3
int main(){
	int sco[N][M],i,j;
	float aver,sum=0;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d",&sco[i][j]);
		}
	}
	for(i=0;i<N;i++){
	//	sum=0;
		for(j=0;j<M;j++)
			sum+=sco[i][j];
			aver=sum/M;
			printf("%d   %.1f\n",i+1,aver);
		
	}
}
