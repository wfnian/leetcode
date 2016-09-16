#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[1024];
	gets(a);
	int i;
	for(i=0;a[i]!='\0';i++)
		scanf("%c",a[i]);
		
		for(i=0;a[i]!='\0';i++)
		puts("%c",a[i]);
		
	system("pause");
	return 0;
}
