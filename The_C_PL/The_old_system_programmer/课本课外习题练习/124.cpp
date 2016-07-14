#include<stdio.h>
int main(){
	int x,y;
	int*px;
	int *py;
	px=&x;
	py=&y;
	scanf("%d %d",&x,&y);
	printf("%d\n",*px+*py);
} 
