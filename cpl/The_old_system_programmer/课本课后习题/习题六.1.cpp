#include<stdio.h>
int main(){
	int m,n;
	int k(int a,int b);
	printf("请输入两整数：");
	scanf("%d,%d",&m,&n);
	printf("\n 这两数最小公倍数是%d \n",k(m,n));
}
int k(int a,int b){
	int x=a,y=b;
	while(y!=0){
		int r;
		r=x%y;
		x=y;y=r;
		}
	return a*b/x;
}
