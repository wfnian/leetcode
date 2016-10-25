#include<stdio.h>
int i = 0;
int N = 1;
void move(char a, int n, char d) {
	//printf("%2d. Move disk %d from %c to %c\n", i++, n, a, d);
	i++;
}
void hanoi(int n, char a, char b, char c) {
	if (n == 1) {
		move(a, 1, c);
	}
	else {
		hanoi(n - 1, a, c, b);
		move(a, n, c);
		hanoi(n - 1, b, a, c);
	}
}
void Hanoi(int n, char a, char b, char c, char d) {
	int x, y, z;
	if (n == 1) {
		move(a, 1, d);
	}
	else {
		for (x = 2, y = 0, z = n; z > 0; x++, y++)
			z = z - x;
		Hanoi(n - y, a, c, d, b);
		hanoi(y, a, c, d);
		Hanoi(n - y, b, a, c, d);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C', 'D');
	printf("%d ", i);
}