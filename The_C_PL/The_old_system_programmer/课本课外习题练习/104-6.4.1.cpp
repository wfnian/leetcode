#include"stdio.h"
int mmm(int a[102])
	{
		int i,sum=0;
		for(i=0;i<10;i++)
		 sum+=a[i];
		 return sum;
	}
main(){
	int b[10],j,n;
	int summ;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	scanf("%d",&b[j]);
	summ=mmm(b);
	printf("%d",summ);
}
