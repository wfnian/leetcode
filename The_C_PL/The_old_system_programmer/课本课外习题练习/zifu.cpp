#include<stdio.h>
int main(){
	char a[100];
	gets(a);
	int i=0,n=0;
	while(a[i]!='\0'){
		if(a[i]<='z'&&a[i]>='a')
		n++;
		i++;
	}
	printf("%d\n",n);
}
