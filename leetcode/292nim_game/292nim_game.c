////////////////////
/// so easy ///mod
////////////////////
#include<stdio.h>
#include<stdbool.h>

bool canWinNim(int n) {
	return n % 4 != 0;
}

int main() {
	printf("%d\n",canWinNim(5));
}