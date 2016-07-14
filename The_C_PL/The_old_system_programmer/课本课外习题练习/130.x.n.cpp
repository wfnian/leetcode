#include<stdio.h>
int main(){
	int a[16],i,*p;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(p=a;p<a+4;p++){
		*p=*p+1;
	} 
/*	p=a;*/
	for(p=a;p<a+4;p++){
		printf("%d ",*p);
	}
}
