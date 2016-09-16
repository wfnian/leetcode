#include<stdio.h>
#include<string.h>
struct ham{
	char A;
	char B;
};
int main(){
	struct ham a[33];
	struct ham b[33];
	scanf("%s %s",&a.A,&a.B);
	scanf("%s %s",&b.A,&b.B);
	if(strcmp(a.A,b.A)==0){
		printf("%s\n",b.B);
	}
	else
		printf("%s%s",b.A,b.B);
	return 0;
}
