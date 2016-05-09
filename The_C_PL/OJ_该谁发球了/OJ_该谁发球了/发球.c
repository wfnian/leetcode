////#include<stdio.h>
////int main() {
////	int a, b;
////	while (scanf("%d %d", &a, &b) != EOF) {
////		if ((a >= 0 && a <= 100) && (b >= 0 && b <= 100)) {
////			if (a >= 11 || b >= 11) {
////				printf("Game Over\n");
////			}
////			else if ((a + b-3) % 7 == 0||a+b==0||a+b==1) {
////				printf("A\n");
////			}
////			else printf("B\n");
////		}
////	}
////}
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//main() {
//	int a, b;
//	while (scanf("%d %d", &a, &b)!= EOF) {
//		if (a>b)
//			if (a >= 11&&b<=9|| b >= 11&&a<=9||(b-a)>=2)
//			{
//				printf("Game Over\n");
//			}
//			else
//			{
//				printf("B\n");
//			}
//		else if (a == b)
//			printf("A\n");
//		if (a<b)
//			if ((b % 4 == 1 || b % 4 == 0) || (abs(a - b)<2))
//				printf("A\n");
//			else
//			{
//				printf("B\n");
//			}
//	}
//
//}
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d;
	while ((scanf("%d %d", &a, &b)) != EOF)
	{
		c = a + b;
		if (a >= 11 || b >= 11)
		{
			d = abs(a - b);
			if (d >= 2)printf("Game Over\n");
			else if (c % 2 == 0)printf("A\n");
			else printf("B\n");
		}
		else
		{
			if ((c + 1) % 4 == 0 || (c + 2) % 4 == 0)
				printf("B\n");
			else printf("A\n");
		}
	}

	return 0;

}


