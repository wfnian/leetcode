#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b){
	int i;
	int m;
	if(a<b)
		m=a;
	else
		m=b;
	for(i=m;i>=1;i--){
		if(a%i==0&&b%i==0)
		return i;
	}
	
}
main(){
	int n1,n2,res;
	scanf("%d %d",&n1,&n2);
	res=gcd(n1,n2);
	printf("%d",res);
	return 0;
}
