/*
https://leetcode.com/problems/powx-n/
50. Pow(x, n)  
Implement pow(x, n).
*/
#include<stdio.h>

//double myPow(double x, int n) {
//	double num = x;
//	if (n == 0) {
//		printf("1.000000\n");
//	}
//	else {
//		for (int i = 1; i < n; i++) {
//			x *= num;
//		}
//		printf("%lf\n", x);
//	}
//	return 0;
//}
double myPow(double x, int n) {
	
	if (n == 0) {
		double a = 1.00000;
		return a;
	}
	else if(n>0){
		double num = x;
		for (int i = 1; i < n; i++) {
			x *= num;
		}
		printf("%lf\n", x);
		return x;
	}
	else if (n < 0) {
		double m = 1.0 / x;
		double num = m;
		for (int i = 1; i <-n; i++) {
			m *= num;
		}
		printf("%lf\n", m);
		return m;
	}
	return;
}

int main() {
	/*myPow(2,3);
	myPow(2.2, 2);
	myPow(8.88023, 3);*/
	myPow(3, -3);
//	myPow(1.0 / 3.0, 3);
	myPow(0.00001, 2147483647);
}