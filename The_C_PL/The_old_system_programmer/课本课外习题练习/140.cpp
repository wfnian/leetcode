#include<stdio.h>
int main(){
	int x[5]={1,3,5,7,9},y[2][2]={2,4,6,8},z=10;
	int *px,*py,*pz,**p;
	int i,j;
	pz=&z,p=&pz;
	printf("*pz=%d\t**p=%d\t*(*p)=%d\n",*pz,**p,*(*p));
	px=x;p=&px;
	for(i=0;i<5;i++)
		printf("%d\t",*(*p+i));
	printf("\n");
	py=y[0];
	p=&py;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
			printf("%d\t",*(*p+i*2+j));
		printf("\n");
	}
	for(i=0;i<2;i++){
		py=y[i];
		p=&py;
		for(j=0;j<2;j++)
			printf("%d\t",*(*p+j));
		printf("\n");
	}
} 
