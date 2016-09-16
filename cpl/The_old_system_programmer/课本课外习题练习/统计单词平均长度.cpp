#include<stdio.h>
#include<string.h>
int main(){
	char a[1024];
	int i,k;
	gets(a);
	float j=0.0,b;
	b=strlen(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			j++;
		}
	}
/*	printf("%f\n",j+1.0);
		printf("%f\n",(b-j));*/ 
	printf("%.2f\n",(b-j)/(j+1.0));
} 
