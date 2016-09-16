#include<stdio.h>
#include<math.h>
int main() {
	int b=-1,i;
	float s=0,d=1.0;
	for (i = 1;i<1000;) {
		d = d + s;
		i = i + 2;
		s = b*(1.0 / i);
		b = -b;
	}
	printf("%f\n", 4*d);
}