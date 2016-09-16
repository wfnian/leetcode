#include<stdio.h>
main()
{
  int i,a,b,c;
  float s=0;
  scanf("%d%d%d",&a,&b,&c);
  for(i=1;i<=a;i++)
   s+=i;
   for(i=1;i<=b;i++)
   s+=i*i;
   for(i=1;i<=c;i++)
   s+=1.0/i;
   printf("%.2f\n",s);
}

