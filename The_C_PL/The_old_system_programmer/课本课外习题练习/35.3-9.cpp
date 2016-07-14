#include<stdio.h>
#define LEAP_YEAR(y)
int main(){
   int y,flag;
   scanf("%d",&y);
   if(y%4==0)
         if(y%100!=0)
		    flag =1;
		 else
		     if(y%400!=0)
		       flag=0;
		     else
		       flag=1;
	else
	   flag=0;
	if(flag)
	 printf("L");
	else
	 printf("N");
	return 0;
}
