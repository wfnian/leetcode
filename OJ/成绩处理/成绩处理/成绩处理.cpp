#include<stdio.h>
#include<iostream>
#include<iomanip>

using namespace std;

#define MAX 20

typedef int Status;
typedef struct student {
	char name[MAX];
	long num;
	float a, b, c, d, e;
}Stu;

void InputStu() {
	printf("\n请录入学生信息!\n\n");
	Stu Student[30];
	int i = 0;
	for (i = 0; i < 30; i++) {
		scanf("%s %ld %lf %lf %lf %lf", Student[i].name, &Student[i].num, &Student[i].a, &Student[i].b, &Student[i].c, &Student[i].d, &Student[i].e);
	}

}

int main() {
	cout << "请选择要执行的职能（1-4）" << endl;
	cout << "``````````````````````````````````````````````````" << endl;
	cout << "1.	按学生查询" << endl;
	cout << "1．1	查询某学生某门课成绩（输入学号，输出成绩）" << endl;
	cout << "1．2	查询某学生平均成绩（输入学号，输出成绩）" << endl;
	cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^" << endl;
	cout << "2．按课程查询" << endl;
	cout << "2．1  查询某门课平均成绩（输入课程，输出平均成绩）" << endl;
	cout << "2．2 查询某门课及格率（输入课程，输出及格率）" << endl;
	cout << "2．3 查询某门课程最小成绩（输入课程，输出姓名、最小成绩" << endl;
	cout << "2．4 查询某门课程最大成绩（输入课程，输出姓名、最大成绩）" << endl;
	cout << "2．5  将某门课程按学号从小到大输出成绩（依次输出姓名、学号、成绩）" << endl;
	cout << "2．6  将某门课程按成绩从小到大输出成绩（依次输出姓名、学号、成绩）" << endl;
	cout << "*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*" << endl;
	cout << "3. 添加学生及相应课程成绩" << endl;
	cout << "!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^" << endl;
	cout << "4. 删除学生及相应课程成绩" << endl;
	cout << "~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~" << endl;
	
	//InputStu();
	printf("\n请录入学生信息!\n\n");
	Stu Student[30];
	int i = 0;
	for (i = 0; i < 30; i++) {
		scanf("%s %ld %lf %lf %lf %lf", Student[i].name, &Student[i].num, &Student[i].a, &Student[i].b, &Student[i].c, &Student[i].d, &Student[i].e);
	}

	int first_operate, second_operate;
	printf("请输入第一步操作：注意，输入只限数字1-4,其余无效！\n");
	while (scanf("&d", &first_operate)!=NULL) {
		switch (first_operate) {
		case 1: {
			cout << "1.	按学生查询，欢迎" << endl;
			printf("请输入第二步操作：注意，输入只限数字1-2,其余无效！\n");
			scanf("&d", &second_operate);
			switch (second_operate) {
			case 1: {
				cout << "1．1	查询某学生某门课成绩（输入学号，输出成绩）" << endl;
				long sum;
				scanf("%ld", &sum);
				for (i = 0; i < 30; i++) {
					if (sum == Student[i].num) {
						printf("成绩是%d %d %d %d %d\n", Student[i].a, Student[i].b, Student[i].c, Student[i].d, Student[i].e);
					}
					else printf("不存在！\n");
				}
			}break;
			case 2: {
				cout << "1．2	查询某学生平均成绩（输入学号，输出成绩）" << endl;
				long sum1;
				scanf("%ld", &sum1);
				for (i = 0; i < 30; i++) {
					if (sum1 == Student[i].num) {
						printf("平均成绩是%d \n", (Student[i].a+Student[i].b+Student[i].c+ Student[i].d+ Student[i].e)/5);
					}
					else printf("不存在！\n");
				}
			}break;
			default:cout << "ERROR\n" << endl;
			}
		}break;
		case 2: {
			cout << "2．按课程查询" << endl;
			cout << "请输入第二步操作：注意，输入只限数字1-6,其余无效！\n" << endl;
		}break;
		case 3: {
			cout << "3. 添加学生及相应课程成绩" << endl;
		}break;
		case 4: {
			cout << "4. 删除学生及相应课程成绩" << endl;
		}break;
		default:printf("ERROR!\n"); break;
		}
	}
}