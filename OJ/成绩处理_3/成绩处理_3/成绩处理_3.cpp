#include<iostream>
#include<iomanip>
#include<cmath>
#define MAXSIZE 30
#define OK 0
#define ERROR -1
static int N = 0;
using namespace std;

typedef int Status;
typedef struct student
{
	char name[MAXSIZE];
	long num;
	int socore;
}Students;

Students a[MAXSIZE];

void In_ascending_order()//按【升序】输出列出所有成绩
{
	int min, k, t, i;
	for (k = 0; k < N; k++)//冒泡排序
	{
		min = k;
		for (i = k + 1; i<N; i++)
		{
			if (a[i].socore<a[min].socore)
				min = i;
		}
		t = a[k].socore;
		a[k].socore = a[min].socore;
		a[min].socore = t;
	}
	for (i = 0; i<MAXSIZE; i++)
		cout << a[i].name << " " << a[i].num << " " << a[i].socore << endl;

}
void In_descending_order()//按【降序】输出列出所有成绩
{
	int max, k, t, i;
	for (k = 0; k<N; k++)//冒泡排序
	{
		max = k;
		for (i = k + 1; i<N; i++)
		{
			if (a[i].socore>a[max].socore)
				max = i;
		}
		t = a[k].socore;
		a[k].socore = a[max].socore;
		a[max].socore = t;
	}
	for (i = 0; i<MAXSIZE; i++)
		cout << a[i].name << " " << a[i].num << " " << a[i].socore << endl;
}
void Found_with_name()//按姓名查询查询成绩
{
	int i;
	char Str[MAXSIZE];
	cout << "Please enter a query name:" << endl;
	cin >> Str[MAXSIZE];
	for (i = 0; i <= N; i++)
		if (strcmp(Str, a[i].name))break;
	cout << "The student information:" << endl;
	cout << a[i].name << " " << a[i].num << " " << a[i].socore;
}
void FoundWithNumber()//按学号查询查询成绩
{
	cout << "Please enter the student ID for which to query:" << endl;//请输入要查询学生学号：
	int M, i;
	cin >> M;
	for (i = 0; i <= N; i++)
		if (M == a[i].num)break;
	cout << "The student information:" << endl;//该学生成绩信息:
	cout << a[i].name << " " << a[i].num << " " << a[i].socore;
}
void Delete()//删除某个学号对应的学生成绩(输入学号)
{
	cout << "请输入要删除的学生学号：" << endl;
	int M, j, i;
	cin >> M;
	for (i = 0; i <= N; i++)
		if (M == a[i].num)break;
	for (j = i; j <= N - 1; j++)
	{
		strcpy(a[j].name, a[j + 1].name);
		a[j].num = a[j + 1].num;
		a[j].socore = a[j + 1].socore;
	}
	cout << "OK,delete successfully!" << endl;
}
void Insert()//插入一个学生成绩:姓名、学号、成绩
{
	int Number, Score;
	char Str1[MAXSIZE];
	cout << "Please enter the student information to be inserted:" << endl; //请输入要插入的学生信息:
	cin >> Str1[MAXSIZE];
	cin >> Number;
	cin >> Score;
	strcpy(a[N + 1].name,Str1);
	a[N + 1].num = Number;
	a[N + 1].socore = Score;
	N++;
}
void Select_Score()//选择输出最优成绩或最差成绩
{
	int i = 0, min, max, num;
	min = i; max = i;
	for (i = 0; i<MAXSIZE; i++)
	{
		if (a[i].socore>a[max].socore)
			a[max].socore = a[i].socore;
		if (a[i].socore<a[min].socore)
			a[min].socore = a[i].socore;
	}
	cout << "请选择输出最优成绩(1)或最差成绩(2):" << endl;
	cin >> num;
	switch (num)
	{
	case 1:cout << "The best:" << a[max].name << " " << a[max].num << " " << a[max].socore; break;
	case 2:cout << "The bad:" << a[min].name << " " << a[min].num << " " << a[min].socore; break;
	default:cout << "Please enter the correct option." << endl;; break;
	}
}

void Failure_rates()//输出不及格率
{
	int i, j = 0;
	double Q;
	for (i = 0; i<MAXSIZE; i++)
	{
		if (a[i].socore<60)
			j++;
	}
	Q = (j / N) * 100;
	cout << "Failure rates as follows:" << Q << "%" << endl;//不及格率为:
}
void Excellent_rates()//输出优良率（>=80分）
{
	int i, j = 0;
	double W;
	for (i = 0; i < MAXSIZE; i++)
	{
		if (a[i].socore >= 80)
			j++;
	}
	W = (j / N) * 100;
	cout << "Excellent rates is:" << W << "%" << endl;//优秀率;
}
void AVERAGE()//输出平均成绩
{
	int i, j, num, AVERAGE;
	num = 0;
	j = 1;
	for (i = 0; i<MAXSIZE; i++)
	{
		num = num + a[i].socore;
		j++;
	}
	AVERAGE = num / j;
	cout << "Average score:" << AVERAGE << endl;//平均成绩
}

Status Inputmessage() {
	int i;
	cout << "请输入5-30个学生信息，输入00结束输入!" << endl;
	for (i = 0; i<MAXSIZE; i++)
	{
		cout << "Please enter the name:" << endl;
		cin >> a[i].name;
		if (a[i].name == 00)break;
		cout << "Please enter the student number:" << endl;
		cin >> a[i].num;
		if (a[i].num == 00)break;
		cout << "Please enter the student score:" << endl;
		cin >> a[i].socore;
		if (a[i].socore == 00)break;
		N++;
	}
	if (N < 5) {
		cout << "   Please enter more than five student information!" << endl;
		return ERROR;
	}
	return OK;
}

Status Check_Errors() {
	switch (a[2].socore) {
	case 1: {
		switch (a[2].socore) {
		case 1: {
			;
		}break;
		case 2: {
			;
		}break;
		default:break;
		}
	}break;
	case 2: {
		;
	}break;
	default:break;
	}
	return OK;
}

Status Cout() {
	cout << "**============================**" << endl;
	cout << "==1.按【升序】输出列出所有成绩==" << endl;
	cout << "==2.按【降序】输出列出所有成绩==" << endl;
	cout << "==3.  按【姓名】查询查询成绩  ==" << endl;
	cout << "==4.  按【学号】查询查询成绩  ==" << endl;
	cout << "==5.删除某个学号对应的学生成绩==" << endl;
	cout << "==6.     插入一个学生成绩     ==" << endl;
	cout << "==7.选择输出最优成绩或最差成绩==" << endl;
	cout << "==8.       输出不及格率       ==" << endl;
	cout << "==9.        输出优良率        ==" << endl;
	cout << "==10.      输出平均成绩       ==" << endl;
	cout << "==11.        程序结束         ==" << endl;
	cout << "**============================**" << endl;
	return OK;
}

int main()
{
	cout << "程序主功能：" << endl;
	Cout();
	Check_Errors();
	Inputmessage();
	int num;
	while (1)
	{
		Cout();
		Check_Errors();
	loop:	cin >> num;
		if (num == 11)break;
		switch (num)
		{
		case 1: {
			In_ascending_order();
			Check_Errors(); 
		} break;
		case 2:
			In_descending_order();
			break;
		case 3: {
			Found_with_name(); 
			Check_Errors();
		} break;
		case 4:
			FoundWithNumber();
			break;
		case 5:
			Delete(); 
			break;
		case 6:
			Insert();
			break;
		case 7:
			Select_Score();
			break;
		case 8:
			Failure_rates();
			break;
		case 9:
			Excellent_rates();
			break;
		case 10:
			AVERAGE(); 
			break;
		default: {
			cout << "ERROR\n" << endl; 
			Check_Errors();
			goto loop; 
		}break;
		}
	}

	return OK;
}

//本程序主要以switch分支语句为核心，以冒泡排序为主要算法解决实际问题