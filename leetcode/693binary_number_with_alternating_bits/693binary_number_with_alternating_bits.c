#include<stdio.h>// add c solution
#include<stdbool.h>

int mtrix[33];
void mtrixM() {
	mtrix[0] = 0;
	int i;
	for (i = 1; i<32; i++) {
		if (i % 2 == 0)
			mtrix[i] = mtrix[i - 1] * 2;
		else mtrix[i] = mtrix[i - 1] * 2 + 1;
	}
}

bool hasAlternatingBits(int n) {
	mtrixM();
	int i = 0;
	for (i = 0; i<32; i++) {
		if (n == mtrix[i])
			return true;
	}
	return false;
}

int main() {
	mtrixM();
	int i;
	for (i = 0; i<10; i++) {
		printf("%d ", mtrix[i]);
	}
}
