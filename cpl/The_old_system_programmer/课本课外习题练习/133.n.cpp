#include<stdio.h>
int main(){
	int a[2][2]={1,3,5,7},i;
	int *p;
	p=&a[0][0];
	for(i=0;i<4;i++){
		printf("%d ",*(p+i));
	}
}
