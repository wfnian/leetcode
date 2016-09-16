#include<stdio.h>
int gcd(int a,int b){
	int m,i;
	if(a<b)
		m=a;
	else
		m=b;
	for(i=m;i>=1;i--)
		if(a%i==0&&b%i==0)
		return i;
} 
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int gcd(int a,int b);
	int m;
	m=gcd(a,b);
	printf("%d\n",m);
}
