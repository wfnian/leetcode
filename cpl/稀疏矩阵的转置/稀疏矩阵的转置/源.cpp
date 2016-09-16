#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#define OK 0
#define ERROR -1
typedef int Status;
typedef int DataType;

typedef struct Date {
	int i, j;
	int data;
}Data;

typedef struct {
	int m;
	int n;
	int num;
	Data Nozero[MAX];
}AMartix;

Status Getij(AMartix M, int i, int j, DataType *e) {
	int t = 0;
	for (t = 0; t < M.num; t++) {
		if (M.Nozero[t].i = i&&M.Nozero[t].j) {
			*e = M.Nozero[t].data;
			return OK;
		}
	}
}

Status Turns(AMartix M, AMartix *TM) {
	int i, j, t = 0;
	TM->m = M.n;
	TM->n = M.m;
	TM->num = M.num;
	for (j = 0; j < M.m; j++) {
		for (i = 0; i < M.num; i++) {
			if (M.Nozero[i].j == j) {
				TM->Nozero[t].i = M.Nozero[i].j;
				TM->Nozero[t].j = M.Nozero[i].i;
				TM->Nozero[t++].data = M.Nozero[i].data;
			}
		}
	}
	return OK;
}

void Input(AMartix *M, int m, int n) {
	int e;
	int i, j, t = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &e);
			//if (e != 0) {
				M->Nozero[t].data = e;
				M->Nozero[t].i = i;
				M->Nozero[t++].j = j;
			//}
		}
	}
	M->num = t;
	M->m = m;
	M->n = n;
}

void Output(AMartix M) {
	int i;
	for (i = 0; i < M.num; i++) {
		printf("M(%d %d)=%d\n", M.Nozero[i].i, M.Nozero[i].j, M.Nozero[i].data);
	}
}

int main() {
	int m, n;
	AMartix M, TM;
	while (scanf("%d %d", &m, &n) != EOF) {
		Input(&M, m, n);
		Turns(M, &TM);
		Output(TM);
	}

	return 0;
}