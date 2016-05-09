/*现有有N个学生的数据记录，每个记录包括学号、姓名、三科成绩。 编写一
个函数input,用来输入一个学生的数据记录。 编写一个函数print,打印一个学生的
数据记录。 在主函数调用这两个函数，读取N条记录输入，再按要求输出。 N<100
输入
学生数量N占一行 每个学生的学号、姓名、三科成绩占一行，空格分开。
输出
每个学生的学号、姓名、三科成绩占一行，逗号分开。
样例输入
2
a100 zhblue 70 80 90
b200 newsclan 90 85 75
样例输出
a100,zhblue,70,80,90
b200,newsclan,90,85,75
*/
#include<stdio.h>
typedef struct Stu{
	char Num[20];
	char Name[22];
	int a;
	int b;
	int c;
}Student;
int main() {
	int i, N;
	Student s[22];
	scanf("%i", &N);
	for (i = 0; i < N; i++) {
		scanf("%s %s %i %i %i", s[i].Num, s[i].Name, &s[i].a, &s[i].b, &s[i].c);
	}
	for (i = 0; i < N; i++) {
		printf("%s,%s,%i,%i,%i\n", s[i].Num, s[i].Name, s[i].a, s[i].b, s[i].c);
	}
}