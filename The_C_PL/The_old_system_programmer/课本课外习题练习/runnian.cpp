#include"stdio.h"
int main(){
	int m;
	printf("请输入你要验证的年份\n");
	scanf("%d",&m);
	if(m%4==0){
		if(m%100!=0);
		printf("这个年份是闰年");
	}
	else  if(m%100==0&&m%400==0)
		 printf("这个年份是闰年");
		 else 
		 printf("这个年份不是闰年");
	return 0;
}
