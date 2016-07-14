/*#include <stdio.h>
int main(){
 	int a[10]={1,3,3,2,5,1,1,5,6,6};
 	int i,j,k,x=10;
 	for(i=0;i<x;i++){
		  for(j=i+1;j<x;j++){
   			if(a[i]==a[j]){
    			x--;
    		for(k=j;k<x;k++){
     			a[k]=a[k+1];
    			}
    			j--;
   			}
  		}
 	}
 	for(i=0;i<x;i++)
	 printf("%d ",a[i]);
 	printf("\n");
 	return 0;
}*/
#include <stdio.h>
#define flag -1//此外定义了一个标识。把重复的无素赋值为此标识。
int main()
{
 int a[10]={1,3,3,2,5,1,1,5,6,6};
 int b[10];//用于存储有无重复元素的数组。
 int i,j,x=10;//x为无重复有效元素个数
 for(i=0;i<10;i++)
 {
  if(a[i]!=flag)//如果标识过了，就不比较了
  {
   for(j=i+1;j<10;j++)
   {
    if(a[i]==a[j]&&a[j]!=flag)
    {
     a[j]=flag;
     x--;//标识一个重复项，有效无素减少一个
    }
   }
  }
 };
 for(i=0,j=0;i<10;i++)//把非标识的元素，给数组b[];
 {
  if(a[i]!=flag)
  { 
   b[j]=a[i];
   j++;
  }
 };
 for(i=0;i<x;i++)printf("%d",b[i]);
 printf("\n");
 return 0;
}
