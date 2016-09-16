#include<stdio.h>
int main(){
	char str[30],news[30];
	int i,j;
	char c;
	gets(str);
	scanf("%c",&c);
	for(i=0,j=0;str[i]!='\0';i++){
		if(str[i]!=c){
			news[j++]=str[i];
		}
	}
	news[j]='\0';
	puts(news);
}
