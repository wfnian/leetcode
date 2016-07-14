#include<stdio.h>
int main(){
	int n,i,a[n],b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(a[i+1]=a[i])
		  printf("%d",a[i+1]);
	}
	
	return 0;
} 
