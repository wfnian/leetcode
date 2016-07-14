#include<iostream>
#include<iomanip>
#include<cmath>
#define MAXSIZE 30
#define OK 0
#define ERROR -1
static int N = 0;
using namespace std;
int a[30];
struct student
{
public:
	int n;
	int num;
	int name;
	int score;
	for (n = 0; n >= 5 && n <= 30; n++)
		cout << "请输入5-30个学生信息，按0结束" << endl;
	cout << "请输入学号" << endl;
	if (a[i].num == 0)break;
	cin >> a[i].num;
	cout << "请输入姓名" << endl;
	if (a[i].name == 0)break;
	cin >> a[i].name;
	cout << "请输入成绩" << endl;
	if (a[i].score == 0)break;
	cin >> a[i].score;

}
void item();
void enquiry();
void dele();
void insert();
void select();
void fail();
void excellent();
void ave();
int main()
{
	int sele;
	while (1)
	{
		cout << "请选择要执行的功能（输入数字1-9）" << endl;
		cout << "*****************************************" << endl;
		cout << "1.列出所有成绩,1.按升序输出2.降序输出成绩。" << endl;
		cout << "2.查询成绩。1.按姓名查询 2.按学号查询" << endl;
		cout << "3.删除某个学号（输入）对应的学生成绩" << endl;
		cout << "4.插入一个学生成绩（姓名、学号、成绩)" << endl;
		cout << "5.选择输出最优成绩或最差成绩。" << endl;
		cout << "6.输出不及格率" << endl;
		cout << "7.输出优良率（>=80分）" << endl;
		cout << "8.输出平均成绩" << endl;
		cout << "9.退出系统" << endl;
		cout << "*****************************************" << endl;
		cin >> select;
		if (select == 9) break;
		switch (sele)
		{
		case 1:item(); break;
		case 2:enquiry(); break;
		case 3:dele(); break;
		case 4:insert(); break;
		case 5:select(); break;
		case 6:fail(); break;
		case 7:excellent(); break;
		case 8:ave(); break;
		default:cout << "请输入正确的选项" << endl;
		}
	}
	return 0;
}
void item()
{
	int min, k, t, i;
	double m;
	if (m == 1)
		for (k = 0; k<n; k++)
		{
			min = k;
			for (i = k + 1; i<n; i++)
			{
				if (a[i].socore<a[min].socore)
					min = i;
			}
			t = a[k].socore;
			a[k].socore = a[min].socore;
			a[min].socore = t;
		}
	for (i = 0; i<30; i++)
		cout << "a[i].name" << "a[i].num " << "a[i].socore" << endl;
}
		else if (m == 2)
		{
			int max, k, t, i;
			for (k = 0; k<n; k++)
			{
				max = k;
				for (i = k + 1; i<n; i++)
				{
					if (a[i].socore>a[max].socore)
						max = i;
				}
				t = a[k].socore;
				a[k].socore = a[max].socore;
				a[max].socore = t;
			}
			for (i = 0; i<30; i++)
				cout << "a[i].name " << "a[i].num" << "a[i].socore" << endl;
		}
}
cout << "in item function" << endl;
//列出所有成绩（每行2个学生，输出姓名、学号、成绩）。1.按升序输出2.降序输出成绩。

}
void enquiry()
{
	int m, i;
	char a[30];
	cout << "请输入要查询学生姓名：" << endl;
	cin >> m;
	if (m == 1)
	{
		for (i = 0; i <= n; i++)
		{
			if (strcmp(na, a[i].name))break;
			cout << "该学生成绩信息:" << endl;
		}
		cout << "a[i].name" << "a[i].num " << "a[i].socore" << endl;
	}
	cout << "in enquiry function" << endl;
}
		else if (m == 2)
		{
			cout << "请输入要查询学生学号：" << endl;
			for (i = 0; i <= n; i++)
				int b;
			cin >> b;
			if (b == a[i].num)break;
			cout << "该学生成绩信息:" << endl;
			cout << "a[i].name" << "a[i].num " << "a[i].socore" << endl;
			//查询成绩。1.按姓名查询 2.按学号查询


		}

		void dele()
		{
			? cout << "请输入要删除的学生学号：" << endl;
			int b, j, i;
			cin >> b;
			for (i = 0; i <= n; i++)
			{
				if (b == a[i].num)break;
				for (j = i; j <= n - 1; j++)
				{
					strcpy(a[j].name, a[j + 1].name);
					a[j].num = a[j + 1].num;
					a[j].socore = a[j + 1].socore;
				}
				cout << "in dele function" << endl;
				//删除某个学号（输入）对应的学生成绩。
			}


		}
		void insert()
		{
			int ? i, c;
			char a[30];
			cout << "请输入要插入的学生信息:" << endl;
			cin >> i;
			cin >> c;
			strcpy(a[n + 1].name, i);
			a[n + 1].num = c;
			a[n + 1].socore = c;
			n++;
			cout << "in itinsert function" << endl;
			//插入一个学生成绩（姓名、学号、成绩）。

		}
		void select()
		{
			int i, min, max, c;
			min = a[0].score; max = a[0].score;
			for (i = 0; i<30; i++)
			{
				if (a[i].socore>max)
				{
					c = max;
					max = a[i].socore;
				}
				if (a[i].socore<min)
				{
					min = a[i].socore;
				}

				cout << "最大值" << max << endl;

				cout << "最小值" << min << endl;

			}
			void fail()
			{
				int i, j;
				double Q;
				for (int i = 0; i<30; i++)
				{
					if (a[i].socore<60)
						j++;
				}
				Q = (j / n) * 100;
				cout << "不及格率为:" << Q << "%" << endl;
				//输出不及格率。

			}
			void excellent()
			{
				int i, j;
				double W;
				for (i = 0; i<30; i++)
				{
					if (a[i].socore >= 80)
						j++;
				}
				W = (j / n) * 100;
				cout << "优良率为:" << W << "%" << endl;
				//输出优良率（>=80分）。

			}
			void ave()
			{
				int ? i, j, num, ave;
				num = 0;
				j = 1;
				for (i = 0; i<30; i++)
				{
					num = num + a[i].socore;
					j++;
				}
				ave = num / j;
				cout << "平均成绩为:" << ave << endl;
				//输出平均成绩

			}




