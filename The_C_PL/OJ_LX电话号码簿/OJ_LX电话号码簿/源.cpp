#include<stdio.h>
#include<string.h>
#define NUM 22
struct Telenum {
	char name[NUM];
	char number[NUM];
};
int main() {
	struct Telenum a[NUM];
	int i, j;
	int N, M;
	struct Telenum s[NUM];
	while (scanf("%d %d", &N, &M) != EOF) {
		int LL = -2;
		for (i = 0; i < N; i++) {
			scanf("%s %s", a[i].name, a[i].number);
		}
		for (i = 0; i < M; i++) {
			scanf("%s", s[i].name);
			for (i = 0; i < N; i++) {
				for (j = 0; j < M; j++) {
					if (strcmp(s[j].name, a[i].name) == 0) {
						printf("%s\n", a[i].number);
						LL = -1;
					}
					else continue;
				}
			}
		}
		if (LL != -1) {
				printf("unknow\n");
			}
		}
	}
