#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	for(x=1;x<10000;x++){
		if(x%5==1&&x%6==5&&x%7==4&&x%11==10){
			printf("%d\n",x);
		//	break;
		}
	}
} 
