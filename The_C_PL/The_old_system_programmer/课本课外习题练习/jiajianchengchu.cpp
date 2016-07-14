#include<stdio.h>
int main(){
	int a,b;
	char n;
	scanf("%d %d %c",&a,&b,&n);
	switch(n)
	{
	  case 'a':{
	 	printf("c=%d\n",a+b);
		break;
	 };
		 case 's':{
		 	printf("c=%d\n",a-b);
			break;
		 };
			 case 'd':{
			 	printf("c=%d\n",a*b);
				break;
			 };
				 case 'f':{if(b!=0)
				 	printf("c=%d\n",a/b);
					break;
				 };
	default:printf("ERROR£¡\n");
   }
   return 0;
} 
