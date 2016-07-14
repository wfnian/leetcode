#include<stdio.h>
int main(){
	int a;
	char c;
	int b;
	scanf("%d %c %d",&a,&c,&b);
	switch(c){
		case '+':{
			printf("%d+%d=%d\n",a,b,a+b);
			break;
		}
		case '-':{
			printf("%d-%d=%d\n",a,b,a-b);
			break;
		}
		default:{
			printf("ERROR!");
			break;
		}
	}
}
