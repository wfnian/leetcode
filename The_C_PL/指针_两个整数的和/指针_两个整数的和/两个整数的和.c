#include<stdio.h>
int main() {
	int a, b;
	int *pa, *pb;
	scanf("%d %d", &a, &b);
	pa = &a;
	pb = &b;
	printf("%d\n", *pa + *pb);

	return 0;

}
//int main() {
//	int a;
//	while (scanf("%d", &a)!= EOF ) {
//		int *p;
//		p = &a;
//		if (*p % 2 == 0) {
//			printf("Å¼Êý\n");
//		}
//		else printf("ÆæÊý\n");
//	}
//
//	return 0;
//
//}