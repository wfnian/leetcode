//#include<stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d", &c); 
//	int r;
//	while (c--) {
//		scanf("%d %d", &a, &b);
//		while (a != 0) {
//			r = a%b;
//			a = b;
//			b = r;
//		}
//		printf("%d\n", a);
//	}
//}
#include<stdio.h>
int main() {
	int x, y, r, a, b;
	scanf("%d", &a);
	for (b = 0; b < a; b++) {
		scanf("%d %d", &x, &y);
		//a = x; b = y;
		while (y != 0) {
			r = x%y;
			x = y;
			y = r;
		}
		printf("%d\n", x/* (a * b) / x*/);
	}
}
