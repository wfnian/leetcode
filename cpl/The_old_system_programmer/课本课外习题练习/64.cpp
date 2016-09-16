#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
int main(){
	int op;
	int a=1,b=2,c;
	srand(time(0));
		a=rand()%10;
	printf("开始猜数\n"
		   "输入一个数0－9之间\n"
	); 
	scanf("%d",&c);
	while(1){ 
	if(c>a) 
lo:		printf("大了！\n");
		
		goto loop;
	
loop:	if(c<a)
		printf("小了！\n");
			goto lo;	
		if(a==c){
			printf("恭喜猜对!\n"); 
		break; 
		} 
		} 
}
