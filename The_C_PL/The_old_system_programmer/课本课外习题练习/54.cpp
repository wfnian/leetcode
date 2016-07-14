#include<stdio.h>
#include<stdlib.h>
int main(){
	float t=1,s=0,c,n;
	for(n=1;n<=20;n++){
		t=t*n;
		s=s+t;
	}
	printf("%e",s);
} 
