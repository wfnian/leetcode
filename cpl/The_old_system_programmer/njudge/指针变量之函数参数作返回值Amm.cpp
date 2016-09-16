#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int *p;

	scanf("%d",&n);
	int a[100];
	int i;
		p=&a[0];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int maxm;
	int m=0;
	maxm=a[0]; 
	for(i=0;i<n;i++){
		if(a[i]>maxm)
		maxm=a[i];
	}
		for(i=0;i<n;i++){
		if(a[i]==maxm)
		m++;
	}
	printf("%d %d",maxm,m);
}
