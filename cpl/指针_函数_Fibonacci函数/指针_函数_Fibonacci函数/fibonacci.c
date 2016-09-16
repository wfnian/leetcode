#include<stdio.h>
int main() {
	void Fibonac(int *m);
	int Fibon[40] = { 1,1 }, i, *p;
	p = Fibon;
	Fibonac(Fibon);
	for (i = 2; i < 40; i++) {
		printf("%d ",Fibon[i]);
	}

	return 0;

}
void Fibonac(int *m) {
	int i;
	for (i = 2; i < 40; i++) {
		m[i] = m[i - 1] + m[i - 2];
	}
}