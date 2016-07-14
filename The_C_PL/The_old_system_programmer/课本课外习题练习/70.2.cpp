#include<stdlib.h>
#include<stdio.h>
int main(){
	int a[10];
	int i,sum=0;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		sum=sum+a[i];
	}
	printf("%d",sum);
}
