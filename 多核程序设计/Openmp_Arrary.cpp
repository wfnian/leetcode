#include<omp.h>
#include<Windows.h>
#include<iostream>

#define MAXSIZE 50
#define OK 0

using namespace std;
int const m = MAXSIZE, n = MAXSIZE, q = MAXSIZE;
int main() {
	int a[m][n], b[n][q], c[m][q];
	int i, j, k;
	int kk = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < q; j++) {
			scanf("%d", &b[i][j]);
		}
	}
#pragma omp paralllel default(private) shared(a,b,c,m,n,q) num_threads(2)
#pragma omp for schedule(static)
	for (i = 0; i < m; i++) {
		for (j = 0; j < q; j++) {
			c[i][j] = 0;
			for (k = 0; k < n; k++) {
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	cout << "¾ØÕóarrary:" << endl;
	for (i = 0; i < m; i++) {
		for (j = 0; j < q; j++) {
			cout << c[i][j] << " ";
			kk++;
			if (kk%q == 0)
				cout << endl;
		}
	}


	return OK;

}
