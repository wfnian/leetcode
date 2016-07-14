#include<stdio.h>
int n(int n){
	int i;
	int s;
	for(i=n;i>=1;i--){
		s=s*i;
	}
	return s;
	
} 
int main(){
	int m;
	scanf("%d",&m);
	int sum;
	sum=n(m);
	printf("%d",sum);
}
