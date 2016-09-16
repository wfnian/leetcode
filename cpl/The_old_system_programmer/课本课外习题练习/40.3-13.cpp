#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	switch(a){
		case 1:{
			printf("GOOD MORNING!");
			break;
		}
		case 2:{
			printf("HELLO !");
			break;
		}
		case 3:{
			break;
		}
		case 4:{
			printf(" HELLO WORLD !");
			break;
		}
		default:{
			printf("ERROR!");
			break;
		}
	}
} 
