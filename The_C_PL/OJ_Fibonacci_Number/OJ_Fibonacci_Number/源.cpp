/*
The Fibonacci Numbers {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ,...} are defined by the recurrence: F0 = 0 F1 = 1 Fi = Fi-1 + Fi-2 for all i >= 2 Write a program to calculate the Fibonacci Numbers.

输入


The first line of the input file contains a single integer T, the number of test cases. The following T lines, each contains an integer n ( 0 <= n <= 45 ), and you are expected to calculate Fn.

输出


Output Fn on a separate line.

样例输入

5
0
3
5
9
20

样例输出

0
2
5
34
6765*/
#include<stdio.h>
#define num 50
int main() {
	int Fib[num], red[num], i;
	int N;
	Fib[0] = 0;
	Fib[1] = 1;
	for (i = 2; i < num; i++) {
		Fib[i] = Fib[i - 1] + Fib[i - 2];
		//printf("%i ", Fib[i]);
	}
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%i", &red[i]);
	}
	for (i = 0; i < N; i++) {
		printf("%d\n", Fib[red[i]]);
	}
}