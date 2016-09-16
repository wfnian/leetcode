#include<stdio.h>
int main() {
	int x, y, z;
	for (x = 0; x <= 100; x++) {
		for (y = 0; y <= 100; y++) {
			for (z = 0; z <= 100; z++) {
				if( x+  y + z == 100 && 15 * x + 9 * y + z  == 300)
					printf("%d %d %d\n", x, y, z);
			}
		}
	}

	return 0;

}