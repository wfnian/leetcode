#include<stdio.h>
int main(){
	int n,sum;
	int man(int m);
	scanf("%d",&n);
	sum=man(n);
	printf("%d",sum);
	return 0;
}
int man(int m){
	int summ;
	if(m<=1)
	return 1;
	else
	return m*man(m-1);
}
