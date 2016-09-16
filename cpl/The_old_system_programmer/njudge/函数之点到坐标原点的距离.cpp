#include<stdio.h>
#include<math.h>
float nnnn(float a,float b){
	float c;
	c=sqrt(a*a+b*b);
	return c;
} 
main(){
	float x,y,j;
	scanf("%f %f",&x,&y);
	j=nnnn(x,y);
	printf("%.2f",j);
}
