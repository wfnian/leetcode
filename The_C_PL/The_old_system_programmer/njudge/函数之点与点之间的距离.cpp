#include<stdio.h>
#include<math.h>
float nnnn(float h,float i,float j,float k){
	float d,e;
	e=((h-j)*(h-j)+(i-k)*(i-k));
	d=sqrt(e);
	return d;
}
main(){
	float m,n,p,q;
	float dis;
	scanf("%f %f %f %f",&m,&n,&p,&q);
	dis=nnnn(m,n,p,q);
	printf("%.2f",dis);
}
