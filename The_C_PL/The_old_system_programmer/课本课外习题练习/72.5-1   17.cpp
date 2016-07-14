#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int maxv=a[0];
	for(i=0;i<10;i++){
		if(a[i]<maxv)
		maxv=a[i];
		
	}
	a[0]=maxv;
//	for(i=0;i<10;i++)
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("%d ",maxv);
} 
