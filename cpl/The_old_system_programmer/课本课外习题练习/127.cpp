#include<stdio.h>
int main(){
	int x;
	char res;
	int *px;
	scanf("%d",&x);
	px=&x;
	if(*px%2==0)
	res='y';
	else
	res='n';
	printf("%c",res);
}
