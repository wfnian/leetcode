#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int g;
	int fun(int a, int b);
	g=fun(a,b);
	printf("%d\n",g);
	
} 
int fun(int a, int b){
	int i,m;
	if(a<b)
	m=a;
	else;
	m=b;
	for(i=m;i>=1;i--){
		if(a%i==0&&b%i==0)
		return i;
	}
}
