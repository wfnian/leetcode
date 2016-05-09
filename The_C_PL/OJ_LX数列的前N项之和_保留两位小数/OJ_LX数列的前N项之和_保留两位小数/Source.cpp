//#include<stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
#define NUM 22
int main() {
	float a1[NUM], a2[NUM],q=2.00/1;
	int i, N;

	while (cin >> N) {
		a1[0] = 2.0;
		a1[1] = 3.0;
		a2[0] = 1.0;
		a2[1] = 2.0;
		float Sum = 2.0+3.0/2, M = 0.0;
		if (N == 1) {
			cout << "2.00000"<< endl;

		}
		else if (N == 2) {
			cout << "3.66667" << endl;
		}
		else {
			for (i = 2; i < N; i++) {
				a1[i] = a1[i - 1] + a1[i - 2]; 
				a2[i] = a2[i - 1] + a2[i - 2]; 
				M = a1[i] / a2[i]; 
				Sum += M;
			}
			cout  << Sum << endl;
		}
	}

	return 0;
}