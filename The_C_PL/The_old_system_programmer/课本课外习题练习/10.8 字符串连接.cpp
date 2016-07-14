#include<stdio.h>
#include<string.h>
int cc(char a[100],char b[100]);
int main(){
	char a[100],b[100],c[100];
	gets(a);
	gets(b);
	cc(a,b);
}
int cc(char a[100],char b[100]){
	int i,j,k;
	char c[100];
		int m;
	m=strlen(a);
	for(i=0,k=0;a[i]!='\0';i++){
		c[k++]=a[i];
	}
	for(j=0,k=m;b[j]!='\0';j++){
		c[k++]=b[j];
	}
	c[k]='\0';
	puts(c);
}

