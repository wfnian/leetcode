#include<stdio.h>
struct jyw{
	int a;
	int b;
	int c;
	int d;
}j_1,j_2,j_3,j_4;
int main(){
	scanf("%d.%d.%d.%d",&j_1.a,&j_1.b,&j_1.c,&j_1.d);
	scanf("%d.%d.%d.%d",&j_2.a,&j_2.b,&j_2.c,&j_2.d);
	if(j_1.a==j_2.a&&j_1.b==j_2.b){
		printf("TRUE");
	}
	else
	printf("FALSE");
	return 0;
}
