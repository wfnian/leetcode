#include<stdio.h>
int main(){
	int a[40]={1,1},i,n,m=0,k;
	
	float avg,s;
	scanf("%d",&n);
	for(i=2;i<n;i++){
		a[i]=a[i-1]+a[i-2];
	}
for(i=0;i<n;i++){
	if(a[i]%2==0){
	m++;
	s=s+a[i];
	}
	avg=s/(m);
}
	printf("%d %.2f",m,avg);
}
