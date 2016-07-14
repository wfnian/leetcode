#include<stdio.h>
#include<string.h>
void ccc(char str1[1000])
{
	int i,j;
	j=strlen(str1);
	for(i=1;str1[i]!='\0';i++)
	{
		str1[2*i]=str1[i];
		str1[2*i+1]=' ';
	}
}
int main()
{
	char str1[1000];
	int i;
	gets(str1);
	ccc(str1);
	puts(str1);
	return 0;
}

