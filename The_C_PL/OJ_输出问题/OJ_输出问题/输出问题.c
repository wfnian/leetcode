#include<stdio.h>
int  main() {
	int i;
	for (i = 1; i < 35; i++) {
		if (i % 3 == 0 && (i % 5 != 0)) {
			printf("tri\n");
		}
		else if (i % 5 == 0 && (i % 3 != 0)) {
			printf("fri\n");
		}
		else if (i % 3 == 0 && i % 5 == 0) {
			printf("great\n");
		}
		else printf("%d\n",i);
	}

	return 0;
}