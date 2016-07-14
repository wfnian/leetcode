#include <stdio.h>
int main()
{
	int i,j,m,temp,a[11];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
/*	for(i=0;i<10;i++)
		for(j=i+1;j<10;j++)
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}*/
	scanf("%d",&m);
	for(i=0;i<10;i++)
		if(a[i]>m){
			temp=a[i];
			a[i]=m;
			m=temp;
		}
	a[10]=m;
	for(i=0;i<11;i++)
		printf("%d ",a[i]);
		printf("\n");
}

