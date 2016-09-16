#include<stdio.h>
#include<stdlib.h> 
int main(){
	int a,b,c,d;
	
loop:	printf("\t\tPlease enter a passworld\t\n \tNote that the passworld is six digits£º");
		if((scanf("%d",&a)&&a>100000&&a<=999999));
		
		else {
		printf("\t Passworld format is incorrect\n");
		system("cls");	 
		goto loop;
		}
	  printf("\tPlease enter the passworld again:");
	   if(scanf("%d",&b)&&b==a)
		{   printf("\t Registered success\n") ;		
	system("cls");	 
		printf("\n\t       Registered success!\n");
		printf("\t Note account number is\n\t\t\t1008611\n");
		printf("\tHas been automatically for you to jump for the login interface!\n"); 
		} 
	else {
	printf("\t The passworldis not in line with previous passworld\n");
	system("cls");
	goto loop;
	 }
	printf("");
	 if(b==a){
looooooop:	printf("\tPlease enter your account number:"); 
		 scanf("%d",&c);
		   if(c==1008611)
			{printf("\tPlease enter your passworld:");
			 scanf("%d",&d);
				if(d=c) 
				 printf("\tLogin success!\n");
				  else {
				  printf("\tPassworld error!\n");goto looooooop;}
			 }
		} 
	return 0;
} 
