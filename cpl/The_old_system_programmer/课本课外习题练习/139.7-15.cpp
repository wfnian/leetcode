#include<stdio.h>
int main(){
	int x[3]={123,456},y[2][2]={7,8,9},z=10,i;
	int *px[5];
	px[0]=x;
	px[1]=&x[1];
	px[2]=y[0];
	px[3]=&y[1][0];
	px[4]=&z;
	for(i=0;i<5;i++){
		printf("%d\t",*px[i]);
	}
}
