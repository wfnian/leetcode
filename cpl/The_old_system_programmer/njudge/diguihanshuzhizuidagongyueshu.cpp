#include<stdio.h>
int mai(int a,int b){
	int c;
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	printf("%d",a);
}
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	mai(x,y);
	return 0;
}
