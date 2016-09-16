#include<stdio.h>
#include<math.h>
int main(){
	int x[1000];
	int i,n;
	int *p;
	p=x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	x[i]=600 * cos(i * 0.35);
	}
	for(i=0;i<n;i++){
		printf("%d ",*(p++));
	}
}
