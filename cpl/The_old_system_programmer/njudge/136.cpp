#include<stdio.h>
int main(){
	int *px,x[20]={1,1},i;
	int g(int*m);
	px=&x[0];
	g(px);
	for(i=0;i<20;i++){
		printf("%d ",x[i]);
	}
}
int g(int *m){
	int i;
	for(i=2;i<20;i++){
		*(m+i)=*(m+i-1)+*(m+i-2);
	}
}
