#include<stdio.h>
int main(){
	int i,j;
	int x[4][3]={1,2,3,4,5,6,7,8,9,0,11,12};
	int(*p)[3];
	p=x;
	for(i=0;i<12;i++){
		printf("%d ",*(*p+i));
	}
}
