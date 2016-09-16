#include<stdio.h>
int main(){
	int i,j,x[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
	int*p;
	p=&x[0][0];
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d ",*(p+i));
		}
	}
} 
