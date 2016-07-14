#include<stdio.h>
#include<stdlib.h>
int main(){
	int n=3,f1=1,f2=1,f3;
	printf("%22d%22d",f1,f2);
	for(n=3;n<20;n++){
		f3=f1+f2;
		f1=f2;
		f2=f3;
		printf("%22d",f3);
		if(n%5==0)
		printf("\n");
	}
}
