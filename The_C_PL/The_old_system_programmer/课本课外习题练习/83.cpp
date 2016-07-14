#include<stdio.h>
int main(){
	char a[100];
	gets(a);
	int i;
	for(i=0;a[i]!='\0';i++){
		if(a[i]<='z'&&a[i]>='a')
		a[i]-=32;
	}
	puts(a);
}
