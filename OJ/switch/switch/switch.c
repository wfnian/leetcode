#include<stdio.h>
int main() {
	int a1;
	int a2;
	while (scanf("%d", &a1)) {
		switch (a1) {
		case 1: {
			scanf("%d", &a2);
			switch (a2) {
			case 1: {
				printf("1.1\n");
			}break;
			case 2: {
				printf("1.2\n");
			}break;
			default:break;
			}
		}break;
		case 2: {
			scanf("%d", &a2);
			switch (a2) {
			case 1: {
				printf("2.1\n");
			}break;
			case 2: {
				printf("2.2\n");
			}break;
			default:break;
		}break;
		default:break;
		}
	}
}