#include<stdio.h>
int main(){
	float x,sum=0;
	while(x>0.0){
		sum=sum+x;
		scanf("%f",&x);
	}
	printf("%f",sum);
}
