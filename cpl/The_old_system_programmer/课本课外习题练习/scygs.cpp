#include<stdio.h>
int main(){
	char c[36],b[36];
	char n;
	int i,m;
	char d='a';
	gets(c);
	scanf("%c",&n);
	for(i=0;c[i]!='\0';i++){
		if(c[i]==n){
			c[i]=d;
			m=i;
		for(i=m+1;c[i]!='\0';i++){
			b[i]=c[i];
		}
		b[i]='\0';
		}
	}
	for(i=0;i<m;i++){
		printf("%c",c[i]);
	}
	for(i=m+1;b[i]!='\0';i++){
		printf("%c",b[i]);
	}
}
