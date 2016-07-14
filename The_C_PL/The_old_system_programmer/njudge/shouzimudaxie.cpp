#include<stdio.h>
int main()
{
	char str[100];
	int i;
	int j=0,k=0;
	float ave;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		j++;
		else
		k++;
		
	}
    ave=(float)k/(j+1);
	printf("%0.2f",ave);
	return 0;
}
