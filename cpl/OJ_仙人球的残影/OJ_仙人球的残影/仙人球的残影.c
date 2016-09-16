#include<stdio.h>
#define m 3
int main() {
	int a[44];
	//int n;
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++) {
	//	printf("%3d ", i);
	//}
	//printf("\n");
	//for (int i = n + 1; i < 2 * n ; i++) {
	//	printf("%d\n", i);
	//}
	//for(int i=);
	int i, j, k, n;
	scanf("%d", &n);
	for (i = 1; i < n+1; i++) {
		printf("%3d", i);
		for (j = n+1; j < i*2; j++) {
			printf("\n");
			printf("%3d", i + j);
			for (k = 1; k < j*i; k++) {
				printf(" ", k );
			}
		}
	}
}
1 #include <stdio.h>
2
3 int main() {
	4     int n;
	5     int flag[11][11];
	6     int i;
	7     int j;
	8     int k;
	9
		10     while (scanf("%d", &n) != EOF) {
		11         for (i = 0; i<11; i++) {
			12             for (j = 0; j<11; j++)
				13                 flag[i][j] = 0;
			14
		}
		15
			16         k = 1;
		17         for (i = 0; i<n; i++) {
			18             flag[0][i] = k;
			19             k++;
			20
		}
		21
			22         k--;
		23         for (i = 0; i<n; i++) {
			24             flag[i][n - 1] = k;
			25             k++;
			26
		}
		27
			28         k--;
		29         for (i = n - 1; i >= 0; i--) {
			30             flag[n - 1][i] = k;
			31             k++;
			32
		}
		33
			34         k--;
		35         for (i = n - 1; i>0; i--) {
			36             flag[i][0] = k;
			37             k++;
			38
		}
		39
			40         for (i = 0; i<n; i++) {
			41             for (j = 0; j<n; j++) {
				42                 if (flag[i][j] != 0)
					43                     printf("%3d", flag[i][j]);
				44                 else
					45                     printf("   ");
				46
			}
			47
				48             printf("\n");
			49
		}
		50
	}
	51     return 0;
	52
}