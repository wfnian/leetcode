#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,i,s;
	int m;
	scanf("%d",&a);
	do{
		i=a;
		s=a%i;
		if(s=0)
			m=0;
		else
		i--;
	}while(i=2);
	
	if(s!=0)
	printf("YES");
}
