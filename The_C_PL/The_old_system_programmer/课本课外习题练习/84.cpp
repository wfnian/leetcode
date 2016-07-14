#include<stdio.h>
int main(){
	char str[30],new_str[30];
	int i,j;
	char c;
	printf("Input a string :\n");
	gets(str);
	printf("Input a radom character\n");
	c=getchar();
	printf("DELLLTHEINPUTCHARACTERFROMTHESTRING\n");
	for(i=0,j=0;str[i]!='\0';i++){
		if(str[i]!=c)
		new_str[j++]=str[i];
	}
	new_str[j]='\0';
	puts(new_str);
} 
