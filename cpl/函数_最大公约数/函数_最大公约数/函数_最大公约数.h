#pragma once

inline int main() {
	int n1, n2, res;
	int gcd(int a, int b);
	scanf("%d %d", &n1, &n2);
	res = gcd(n1, n2);
	printf("%d\n", res);

}

inline int gcd(int a, int b) {
	int i, m;
	if (a < b)
		m = a;
	else m = b;
	for (i = m; i >= 1; i--)
		if (a%i == 0 && b%i == 0)
			return i;
}
