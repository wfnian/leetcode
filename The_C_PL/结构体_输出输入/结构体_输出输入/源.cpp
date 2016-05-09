#include<stdio.h>
typedef struct {
	int year;
	char month[6];
	int dates;
}in;
int main() {
	int i;
	in a[3];
	for (i = 0; i < 3; i++) {
		scanf("%d%s%d", &a[i].year, &a[i].month, &a[i].dates);
	}
	for (i = 0; i < 3; i++) {
		printf("%d\t%s\t%d\n", a[i].year+3, a[i].month, a[i].dates);
	}

	return 0;

}
	
//scanf_s("%d%s%d", &a.date, &a.month, &a.year);
//printf("%d\t%s\t%d\n", a.year, a.month, a.date);
//printf("%d\t%s\t%d\n", a.year, a.month, a.date);