#include<stdio.h>
int main(){
	int i;
	int a[4][3]={1,2,3,4,5,6,7,8,9,0,11,22};
	int *p;
	p=&a[0][0];
	for(i=0;i<12;i++){
		printf("%3d ",*(p+i));
	}
}
