#include<stdio.h>
int i = 1;
void move( char x, int n, char z) {
	
	printf("%2d. Move disk %d from %c to %c\n", i++, n, x, z);
}
void Hanoi(int n, char x, char y, char z) {

	if (n == 1) {
		move( x, 1, z);//printf(" 1. Move disk 1 from %c to %c\n", x, z);
	}
	else {
		Hanoi(n - 1, x,z,y);
		move(x, n, z);//
		Hanoi(n - 1, y, x, z);
	}
}

int main() {
	int h;
	while (~scanf("%d", &h)) {
		Hanoi(h, 'X', 'Y', 'Z');
		printf("\n");
		i = 1;
	}
}
