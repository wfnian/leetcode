#include<stdio.h>
int main(){
	int x,y,s;
	x=5;
	y=6;
	int *px,*py;
	px=&x;
	py=&y;
	printf("%d ",*px+*py);
} 
