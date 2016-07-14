#include<stdio.h> 
int main(){
	int i,j=0;
	char c[2400];
	char *p;
	gets(c);
	p=c;
	for(p=c;*p!='\0';p++){
		if(*p<'a'||*p>'z'){
			j++;
		}
	}
	if(j>0)
     printf("FALSE");
     else if(j==0)
     printf("TRUE");
	return 0;
}
