/*#include<stdio.h>
int main(){
	int x,y,r,m,a,b;
	scanf("%d %d",&x,&y);
	a==x;
	b==y;
	while(y!=0)
	{
		r=x%y;
		x=y;
		y=r;
	}
	m=a*b/x;
	printf("%d %d",x,m);
	return 0;
} 
*/
#include<stdio.h>
int main(){
	int m,n,r,p,k;
	scanf("%d %d",&m,&n);
		if(n>m)
			{
				k=n;
				n=m;
				m=k;
			}
		p=m*n;
	while(m!=0)
		{
			r=n%m;
			n=m;
			m=r;
		}
	printf("%d %d",n,p);
	return 0;
}
