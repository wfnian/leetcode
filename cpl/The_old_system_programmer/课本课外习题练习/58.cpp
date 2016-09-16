#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int m,i,k;
	scanf("%d",&m);
	k=sqrt(m);
	for(i=2;i<=k;i++)
	if(m%i==0) break;
	if(i>=k+1)
	printf("Y");
	else
	printf("N");
}
