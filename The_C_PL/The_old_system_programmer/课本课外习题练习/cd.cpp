#include<stdio.h>
int main(){
	int a,b,t,r;
	scanf("%d %d",&a,&b);
	r=a%b;
	t=b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	printf("GYS %d\n",b);
	printf("GBS %d\n",a*t/b);
}
