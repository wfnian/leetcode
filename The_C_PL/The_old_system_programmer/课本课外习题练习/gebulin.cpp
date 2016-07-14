#include<stdio.h>
int main(){
	int n,m,i,a=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m>=25){
			a=a+5;
		}
		if(m<25){
			b=b+3;
		}
	}
	printf("%d\n",a+b);
}
