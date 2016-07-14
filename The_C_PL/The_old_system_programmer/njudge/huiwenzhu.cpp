#include <stdio.h>
int main()
{
	int val,m,sum=0; 
	scanf("%d",&val);
	m = val;
	while (m!=0)
		{
		 sum = sum*10 + m%10;
		 m =m/ 10;
		}
	if (sum == val)
	 printf("TRUE\n");
	else
	 printf("FALSE\n");
	return 0;
}
