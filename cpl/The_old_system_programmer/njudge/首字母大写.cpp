#include<stdio.h>
int main()
{
	int i;
	char str[1024];
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(i==0)
		{
			if(str[i]>='A'&&str[i]<='Z')
			str[i]=str[i];
			else
			str[i]=str[i]-32;
		}
		else
		{
		if(str[i]==' ')
		    str[i+1]=str[i+1]-32;
		else;
		}
	}
	printf("%s",str);
	return 0;
}
