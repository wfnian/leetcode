#include<stdio.h>
int main(){
	char a,b,c,d;
	scanf("%c %c",&a,&b);
	
	if(a='z')
	c='a';
	else if(b='z')
	d='a';
	else 
	 c='a'+1;
	d='b'+1;
	printf("%c %c",c,d); 
	return 0;
}
