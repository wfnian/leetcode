#include<stdio.h>
int main(){
	int a[10];
	int i;
	for(i=0;i<10;i++)
	scanf("%d ",&a[i]);
	int k;
	scanf("%d",&k);
	for(i=0;i<10;i++){
			a[i+2]=a[i+1];
		if(k>=a[i]&&k<=a[i+1])

		a[i+1]=k;
		
	}

	for(i=0;i<10;i++)
	printf("%d ",a[i]);
} 
