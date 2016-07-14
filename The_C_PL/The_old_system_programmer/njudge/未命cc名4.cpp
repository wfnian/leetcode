#include<stdio.h>
#define MAX 101
int a[MAX]={0};       
int main(){
	int i,j,n,max=0;
	while(scanf("%d",&n)!=EOF){
	if(n<=0||n>100) return 0;
	a[n]++;
	}
	for(i=0;i<100;i++){
		if(max<=a[i]) max=a[i];
	}

	for(i=0;i<=100;i++){
		if(a[i]==max) 
		printf("%d\n",i);
	} 
	return 0;
}
