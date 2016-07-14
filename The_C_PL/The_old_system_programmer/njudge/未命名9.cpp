#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
    if((b-a==1&&c-b==1)||(c-a==1&&b-c==1)||(a-b==1&&c-b==1)||(c-b==1&&a-c==1)||(a-c==1&&b-a==1)||(b-c==1&&a-b==1))
    printf("TRUE");
    else printf ("FALSE");
    return 0;
}
