#include<stdio.h>//0~16进制随意转化
#include<string.h>
#include<math.h>
char str[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
int main(void) {
	char N[1000], target[1000], newTarget[1000];
	int p, i, j, q;
	while (~scanf_s("%d %d", &p, &q))///101100
	{
		scanf_s("%s", N);
		int sum = 0;
		for (i = 0; i < strlen(N); i++) {
			for (j = 0; j < strlen(str); j++) {
				if (N[i] == str[j])
					sum += j*pow(p, strlen(N) - i - 1);
			}

		}
		int ten = sum, a, div = 0;
		int len = 0;
		while (1) {
			a = ten%q;
			target[len++] = str[a];
			ten /= q;
			if (ten == 0) {
				break;
			}
		}
		target[len] = NULL;
		for (i = 0; i < len; i++) {
			newTarget[i] = target[len - 1 - i];
		}
		newTarget[len] = NULL;
		puts(newTarget);
	}
	return 0;
}