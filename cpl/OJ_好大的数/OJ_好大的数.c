/*
题目描述
求n的t次幂的最后一位（n>0,n<1000000,t>=0,t<1000000）;

输入
输入n，t（多样例）

输出
输出n的t次幂的最后一位。

样例输入
5 3
2 3
10 5
样例输出
5
8
0
*/
//我的方法显示错误
#include<stdio.h>
#include<math.h>
int main(){
	long long a, b;
	int c;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		 c =pow(a,b);
		if(abs(c)<1)
			printf("0\n");
		else printf("%d\n",abs(c)%10);
	}
	
}
//第二种方法

#include<stdio.h>
int main()
{
    int n,t;
    int i=0;
    int ans;
    while(scanf("%d%d",&n,&t)!=EOF)
    {
        ans=1;
        for(i=0;i<t;i++)
        {
            ans=ans*n%10;
        }
        printf("%d\n",ans);
    }
    return 0;
}