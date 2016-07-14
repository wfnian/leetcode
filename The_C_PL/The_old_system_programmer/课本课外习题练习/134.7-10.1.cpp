#include<stdio.h>
int main(){
	int i,j,x[4][3]={1,1,3,4,5,6,7,88,9,0,11,12};
	int(*p)[3];
	p=x;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
			printf("%d  ",*(*(p+i)+j));
	}
}
