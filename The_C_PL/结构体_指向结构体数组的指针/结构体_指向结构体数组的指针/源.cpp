#include<stdio.h>
typedef struct {
	int x;
	float y;
}in;
int main() {
	in a[3], *p;
	int i;
	p = a;
	for (i = 0; i < 3; i++) {
		scanf_s("%d%f", &a[i].x, &a[i].y);
	}
	//for (i = 0; i < 3; i++) {
		//printf("%d %f  ", a[i].x, a[i].y);
	//}
	for (i = 0; i < 3; i++) {
		printf("%d %f  ", p->x, p->y);
		
		}
}
