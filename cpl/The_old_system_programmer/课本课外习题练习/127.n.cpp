#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int *p=NULL;
	p=&x;
	if(*p%2==0){
		printf("YES");
	}
	if(*p%2!=0){
		printf("NO");
	}
}
