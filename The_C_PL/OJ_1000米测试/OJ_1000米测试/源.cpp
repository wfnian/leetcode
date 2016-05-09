#include<stdio.h>
#include<math.h>
int main() {
	int a1, a2, b1, b2, c1, c2, a, b, c, x, y, z;
	scanf("%d:%d:%d", &a1,  &b1, &c1);//00:05:12
	scanf("%d:%d:%d", &a2, &b2, &c2); //00:12:00
	c = (c2 - c1);
	if (c < 0) { b = b2 - b1 - 1; x = -c; }
	else b = abs(b2 - b1);
	if ((b2 - b1 - 1) < 0 || b2 - b1 < 0) a = abs(a2 - a1 - 1);
	else a = a2 - a1;
	if (a<10 && b>10 && c>10)
		printf("0%i%:%i:%i\n", abs(a), abs(b), abs(c)); 
	if (a<10 && b<10 && c>10)
		printf("0%i%:0%i:%i\n", abs(a), abs(b), abs(c));
	if (a<10 && b<10 && c<10)
		printf("0%i%:0%i:%0i\n", abs(a), abs(b), abs(c));
	if (a>10 && b>10 && c>10)
		printf("%i%:%i:%i\n", abs(a), abs(b), abs(c));
	if (a>10 && b<10 && c>10)
		printf("%i%:0%i:%i\n", abs(a), abs(b), abs(c));
	if (a>10 && b>10 && c<10)
		printf("%i%:%i:0%i\n", abs(a), abs(b), abs(c));
	if (a>10 && b<10 && c<10)
		printf("%i%:0%i:0%i\n", abs(a), abs(b), abs(c));
	if (a<10 && b>10 && c<10)
		printf("0%i%:%i:0%i\n", abs(a), abs(b), abs(c));

}

#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,num=0;
	scanf("%d:%d:%d\n",&a,&b,&c);
	scanf("%d:%d:%d", &d, &e, &f);
	num=-a*3600-b*60-c+d*3600+e*60+f;
	if(num/3600<10) printf("0%d:",num/3600);
	else printf("%d:",num/3600);
	if((num%3600)/60<10) printf("0%d:",(num%3600)/60);
	else printf("%d:",(num%3600)/60);
	if(num%60<10) printf("0%d",num%60);
	else printf("%d",num%60);
	return 0;
}
 
