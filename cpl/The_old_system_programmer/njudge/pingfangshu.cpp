#include <stdio.h>
int main ()
{int n, i = 1;
 scanf("%d",&n);
 while(i > 0)
 {
  if(i * i == n)
  {
   printf("Ture");
   break;
  }
  else if(i * i > n)
  {
   printf("False");
   break;
  }
     i++;
 }
 return 0;
}
