#include<stdio.h>
int main(){
	int a[30],i,n,d=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<25){
			d=d+3;
		}
		if(a[i]>=25){
			d=d+5;
		}
	} 
	printf("%d\n",d);
}
