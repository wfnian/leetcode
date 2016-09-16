#include<stdio.h>
int main() {
	/////*unsigned a = 32768;
	////printf("%d ", a);*/
	/////*int k = 11;
	////printf("%d %o %x", k, k, k);*/
	/////*int a = 5;
	////printf("%d ", ++a);*/
	/////*int x = 10;
	////x += x -= x - x;
	////printf("%d ", x);*/
	/////*double x = 1;
	////printf("%f ", x + 3 / 2);*/
	/////*double t;
	////t = 1, t + 5, t++;
	////printf("%f", t);*/
	/////*int a=10 != 9;
	////printf("%d ", a);*/
	/////*int x, y, z, t;
	////x = y = z = 1;
	////t = ++x || ++y&&++z;
	////printf("%d", t);*/
	/////*int a = 1, b = 2, c = 3, d = 4;
	////int i;
	////i = (a < b ? a : c < d ? a : d);
	////printf("%d", i);*/
	/////*int a = 2, b = 3;
	////printf(a > b ? "***a=%d" : "###b=%d", a, b);*/
	/////*int w = 1, x = 2, y = 3, z = 4;
	////int m1, m2, m3, m4;
	////m1 = (w < x) ? w : x;
	////m2 = (m1 < y) ? m1 : y;
	////m3 = (m2 < z) ? m2 : z;
	////printf("%d %d %d", m1, m2, m3);*/
	//////printf("a\bre\'hi\'y\\\bou\n");
	/////*unsigned short a = 65536;
	////int b;
	////printf("%d", b = a);*/
	/////*int a = 10, b = 9, c = 8;
	////c = (a -= b - 5);
	////c = (a % 11) + (b = 3);
	////printf("%d", b);*/
	/////*int a = 1, b = 2;
	////a += b;
	////b = a - b;
	////a -= b;
	////printf("%d %d ",a,b);*/
	int a, b, c, d;
	scanf("%d", &a);
	if (a < 1000 && a>99) {
		b = a % 10;
		c =(a/10)%10 ;
		d = a / 100;
		printf("%d%d%d\n", b,c,d);
	}

	return 0;

}