#include"stdio.h"
#include"math.h"
int main() {
	double a, b, c, s, area;
	printf("please input a,b,c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a + b > c&&a + c > b&&b + c > a) {
		s = 1 / 2.0*(a + b + c);
		area = sqrt(s*(s - a)*(s - b)*(s - c));
		printf("a=%.3lf  b=%.3lf  c=%.3lf\ns=%.5lf\narea=%.7lf\n",a,b,c,s,area);

	}
	else printf("Error!\n");

	return 0;

}