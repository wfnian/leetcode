#include<stdio.h>
#include<string.h>
struct hao{
	char c[100];
	 char a[100];
};
int main(){
	struct hao s[2];
	int i;
	for(i=0;i<2;i++){
		scanf("%s%s",&s[i].c,&s[i].a);
	}
	if(strcmp(s[0].c,s[1].c)==0) 
		printf("%s\n",s[1].a);
	else
		printf("%s%s\n",s[1].c,s[1].a);
	
}
