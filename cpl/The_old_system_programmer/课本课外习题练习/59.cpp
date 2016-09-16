#include<stdio.h>
#include<math.h>
int main(){
	int m,n;
	int flag=1;
	scanf("%d",&m);
	for(n=2;n<m/2&&flag==1;n++)
		if(m%n==0)
			flag=0;
			if(flag)
				printf("Y");
				else
					printf("N");
}
