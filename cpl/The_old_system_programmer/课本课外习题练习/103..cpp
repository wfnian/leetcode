#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10]={4,7,9,1,54,67,88,2,21,3};
	float aver;
	float mmm(int b[10]);
	aver=mmm(a);
	printf("%f",aver);
	return 0;
} 
float mmm(int b[10]){
	float avr;
	int aumm;
	int i;
	for(i=0;i<10;i++)
	 aumm+=b[i];
	 return aumm/10;
	
}
