#include<stdio.h>
int main(){
	char s[29];
	gets(s);
	int cc(char a[33]);
	int m;
	m=cc(s);
	printf("%d\n",m);
}
int cc(char a[33]){
	int i,n=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]<='z'&&a[i]>='a'){
			n++;
		}
	}
	return n;
}
