#include<stdio.h>
#include<stdlib.h>
int main(){
	int n[10]={ 10,5,73,8,9,45,34,55,23,6},i;
	int popo(int a[]);popo(n);
	for(i=0;i<10;i++)
	printf("%d ",n[i]);
	printf("\n\n\n\n\n");
}
int popo(int a[]){
	int i,j,t;
	for(j=1;j<10;j++){
		for(i=0;i<10-j;i++){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
}
