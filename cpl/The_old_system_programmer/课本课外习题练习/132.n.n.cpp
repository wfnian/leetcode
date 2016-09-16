#include<stdio.h>
int main(){
	char c[128]={"Beijing University of Chemical Technology"},*p;
	int i;
	p=c;
	for(p=c;*p!='\0';p++){
		if(*p>=65&&*p<=90){
			printf("%c",*p);
		}
	}
}
