#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int j;
	int jc(int a);
	j=jc(n);
	printf("%d",j);
	
}
int jc(int a){
	int i=1;
	do{
		i=a*i;
		a--;
	}while(a>=1);
	return i;
}
