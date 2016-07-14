#include <stdio.h>
int main() 
{
	int n;
	int i,j;
	int o;
    scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		o=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)o=0;
		}
		if(o==1) printf("%d\n",i);
	}
	return 0;
}
