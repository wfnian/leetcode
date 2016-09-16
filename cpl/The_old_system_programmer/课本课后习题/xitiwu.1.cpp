#include<stdio.h>
int main(){
	int i,a[10];
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	  printf("%d ",a[9-i]);
	return 0;
} 
