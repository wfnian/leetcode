/*成绩与平均分问题
试题描述
   编写函数ReadScore()和Average()，输入某班学生某门课的成绩（最多不超过40人），
   当输入为负值时，表示输入结束，用函数编程统计成绩高于平均分的学生人数。
输入
   输入若干个整数，相邻两项之间用一个空格隔开。
输出
   输出成绩高于平均分的学生人数。
输入示例
   70 90 58 -5
输出示例
   1
数据范围
   输入和输出均为int范围的整数
*/
#include<stdio.h>
int a[22];
int M;
int main() {
	int  i, M=0 ;
	for (i = 0;; i++) {
		scanf("%d", &a[i]);
		if (a[i] < 0) {
			break;
		}
		M++;
	}
	int ReadScore(int b[], int N);
	int Num = ReadScore(a, M);
	printf("%d\n", Num);
	
	return 0;

}
int ReadScore(int b[],int N) {
	int a = 0;
	int Average(int arr[], int N);
	int ave = Average(b, N);
	for (int i = 0; i < N; i++) {
		if (b[i] > ave) {
			a++;
		}
	}
	return a;
}
int Average(int arr[],int N) {
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}
	int average = sum / N;
	return average;
}