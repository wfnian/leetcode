#include<stdio.h>
int main(){
	int *px;
	int x[20]={1,1},i;
	int gen(int*m);
	px=x;
	gen(px);
	printf("%d ",x[0]);
		printf("%d ",x[1]);
		for(i=2;i<20;i++){
			printf("%d ",x[i]);
		}
}
int gen(int*m){
	int i;
	for(i=2;i<20;i++)
		*(m+i) = *(m+i - 1) + *(m+i - 2);
		
}
