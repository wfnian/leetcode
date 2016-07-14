#include<iostream>
using namespace std;
void menu();
void rate();
int max();
int min();
void pubave(int c);
void order();
void peraverage();
void singledisplay();
void menu();
void alldisplay();
void output();
void idorder();
void menub();
struct student
{
	int id[10];
	char name[20];
	int chin;
	int math;
	int eng;
	int che;
	int pol;
};
struct student a[30];
int main()
{
	int d;
	do
	{
		menub();
		cout << "请键入数字以选择一个选项" << endl;
		cin >> d;
		switch (d)
		{
		case 1:singledisplay()；
		case 2:peraverage();
		case 3:pubave();
		case 4:rate();
		case 5:min();
		case 6:max();
		case 7:order();
		case 8:idorder();
		case 0:break;
		default:cout << "请重新输入" << endl;
		}
	} while (d != 0)
		return 0;
}

void rate()
{
	int i, s = 0, c;
	cout << "请键入数字一选择课程" << endl;
	menu();
	cin << c;
	switch (c)
	{
	case 1: {for (i = 1; i <= 30; i++) { if (a[i].chin >= 60)	s = s + 1; }}
	case 2: {for (i = 1; i <= 30; i++) { if (a[i].math >= 60)	s = s + 1; }}
	case 3: {for (i = 1; i <= 30; i++) { if (a[i].eng >= 60)	s = s + 1; }}
	case 4: {for (i = 1; i <= 30; i++) { if (a[i].che >= 60)	s = s + 1; }}
	case 5: {for (i = 1; i <= 30; i++) { if (a[i].pol >= 60)	s = s + 1; }}
	}
	rate = s / 30;
	cout << "该门课程及格率为" << rate << endl;
}
int max()
{
	int i, m, c;
	cout << "请键入数字一选择课程" << endl;
	menu();
	cin << c;
	switch (c)
	{
	case 1: {m = a[0].chin; for (i = 1; i <= 30; i++) { if (a[i].chin>a[0].chin)	m = a[i].chin }cout << "最大值为" << m};
	case 2: {m = a[0].math; for (i = 1; i <= 30; i++) { if (a[i].math>a[0].math)	m = a[i].math }cout << "最大值为" << m};
	case 3: {m = a[0].eng; for (i = 1; i <= 30; i++) { if (a[i].eng>a[0].eng)	m = a[i].eng }cout << "最大值为" << m};
	case 4: {m = a[0].che; for (i = 1; i <= 30; i++) { if (a[i].che>a[0].che)	m = a[i].che }cout << "最大值为" << m};
	case 5: {m = a[0].pol; for (i = 1; i <= 30; i++) { if (a[i].pol>a[0].pol)	m = a[i].pol }cout << "最大值为" << m};
	}
}
int min()
{
	int i, m, c;
	cout << "请键入数字一选择课程" << endl;
	menu();
	cin << c;
	switch (c)
	{
	case 1: {m = a[0].chin; for (i = 1; i <= 30; i++) { if (a[i].chin<a[0].chin)	m = a[i].chin }cout << "最小值为" << m};
	case 2: {m = a[0].math; for (i = 1; i <= 30; i++) { if (a[i].math<a[0].math)	m = a[i].math }cout << "最小值为" << m};
	case 3: {m = a[0].eng; for (i = 1; i <= 30; i++) { if (a[i].eng<a[0].eng)	m = a[i].eng }cout << "最小值为" << m};
	case 4: {m = a[0].che; for (i = 1; i <= 30; i++) { if (a[i].che<a[0].che)	m = a[i].che }cout << "最小值为" << m};
	case 5: {m = a[0].pol; for (i = 1; i <= 30; i++) { if (a[i].pol<a[0].pol)	m = a[i].pol }cout << "最小值为" << m};
	}
}
void pubave()
{
	int i, s = 0, c;
	cout << "请键入数字一选择课程" << endl;
	menu();
	cin << c;
	switch (c)
	{
	case 1: {for (i = 1; i <= 30; i++) s = s + a[i].chin;	ave = s / 30; }
	case 2: {for (i = 1; i <= 30; i++) s = s + a[i].math;	ave = s / 30; }
	case 3: {for (i = 1; i <= 30; i++) s = s + a[i].eng;	ave = s / 30; }
	case 4: {for (i = 1; i <= 30; i++) s = s + a[i].che;	ave = s / 30; }
	case 5: {for (i = 1; i <= 30; i++) s = s + a[i].pol;	ave = s / 30; }
	}
	cout << ave << endl;
}
void order()
{
	int i, minpos, k, t, n, c;
	cout << "请键入数字一选择课程" << endl;
	menu();
	cin << c;
	switch (c)
	{
	case 1: {for (i = 0; i<29; i++) {
		minpos = i; {for (k = 29 - i; k >= 0; k--) { if (a[k].chin<a[minpos].chin)	  minpos = k; } t = a[i].chin; a[i].chin = a[minpos].chin; a[minpos].chin = t; }
		output(c);
	}
	case 2: {for (i = 0; i<29; i++) {
		minpos = i; {for (k = 29 - i; k >= 0; k--) { if (a[k].math<a[minpos].math)	  minpos = k; } t = a[i].math; a[i].math = a[minpos].math; a[minpos].math = t; }
		output(c);
	}
	case 3: {for (i = 0; i<29; i++) {
		minpos = i; {for (k = 29 - i; k >= 0; k--) { if (a[k].eng<a[minpos].eng)	  minpos = k; } t = a[i].eng; a[i].eng = a[minpos].eng; a[minpos].eng = t; }
		output(c);
	}
	case 4: {for (i = 0; i<29; i++) {
		minpos = i; {for (k = 29 - i; k >= 0; k--) { if (a[k].che<a[minpos].che)	  minpos = k; } t = a[i].che; a[i].che = a[minpos].che; a[minpos].che = t; }
		output(c);
	}
	case 5: {for (i = 0; i<29; i++) {
		minpos = i; {for (k = 29 - i; k >= 0; k--) { if (a[k].pol<a[minpos])	  minpos = k; } t = a[i].pol; a[i].pol = a[minpos].pol; a[minpos].pol = t; }
		output(c);
	}
	}
	}
			void input() { cin >> id >> name >> chin >> math >> eng >> che >> pol; }
			void peraverage()
			{
				int num[10];
				int i, k, s = 0;
				cout << "请输入要查询的学号" << endl;
				cin >> num;
				for (i = 0; i<30; i++)
				{
					if (a[i].id == num)
						k = i; break;
					if (a[i].id != num)
						s = s + 1;
				}
				if (s = 30)
				{
					cout << "学号输入错误" << endl;
					break;
				}
				cout << a[k.name]"的品骏成绩为" << (chin + math + eng + che + pol) / 5 << endl;
			}
			void singledisplay()
			{
				int num[10];
				int i, k;
				cout << "请输入要查询的学号" << endl;
				cin >> num;
				for (i = 0; i<30; i++)
				{
					if (a[i].id == num)
						k = i;
				}
				cout << "请键入数字一选择课程" << endl;
				menu();
				cin << c;
				switch (c)
				{
				case 1:cout << a[k].name << '	' << a[k].chin << endl;
				case 2:cout << a[k].name << '	' << a[k].math << endl;
				case 3:cout << a[k].name << '	' << a[k].eng << endl;
				case 4:cout << a[k].name << '	' << a[k].che << endl;
				case 5:cout << a[k].name << '	' << a[k].pol << endl;
				default:cout << "请重新输入" << endl;
				}
				void menu()
				{
					cout << "1.语文" << endl;
					cout << "2.数学" << endl;
					cout << "3.英语" << endl;
					cout << "4.化学" << endl;
					cout << "5.政治" << endl;
				}
				void alldisplay()
				{
					cout << "请键入数字一选择课程" << endl;
					menu();
					cin << c;
					switch (c)
					{
					case 1:cout << "语文平均成绩" << pubave(c) << endl;
					case 2:cout << "数学平均成绩" << pubave(c) << endl;
					case 3:cout << "英语平均成绩" << pubave(c) << endl;
					case 4:cout << "化学平均成绩" << pubave(c) << endl;
					case 5:cout << "政治平均成绩" << pubave(c) << endl;
					}

					void output(int c)
					{
						int i;
						switch (c)
						{
						case 1: {for (i = 0; i<30; i++)cout << a[i].name << a[i].id << a[i].chin << endl; }
						case 2: {for (i = 0; i<30; i++)cout << a[i].name << a[i].id << a[i].math << endl; }
						case 3: {for (i = 0; i<30; i++)cout << a[i].name << a[i].id << a[i].eng << endl; }
						case 4: {for (i = 0; i<30; i++)cout << a[i].name << a[i].id << a[i].che << endl; }
						case 5: {for (i = 0; i<30; i++)cout << a[i].name << a[i].id << a[i].pol << endl; }
						}

						void idorder()
						{
							for (i = 0; i<29; i++) {
								minpos = i;
								{ for (k = 29 - i; k >= 0; k--)
								{
									if (a[k].id<a[minpos].id)
										minpos = k;
								}
								t = a[i].id;
								a[i].id = a[minpos].id;
								a[minpos].id = t;
								output(c)；}
							}

							void menub()
							{
								cout << "1查询某学生某门课成绩（输入学号，输出成绩）" << endl;
								cout << "2查询某学生平均成绩（输入学号，输出成绩）" << endl;
								cout << "3查询某门课平均成绩（输入课程，输出平均成绩）" << endl;
								cout << "4查询某门课及格率（输入课程，输出及格率）" << endl;
								cout << "5查询某门课程最小成绩（输入课程，输出姓名、最小成绩）" << endl;
								cout << "6查询某门课程最大成绩（输入课程，输出姓名、最大成绩）" << endl;
								cout << "7将某门课程按学号从小到大输出成绩（依次输出姓名、学号、成绩）" << endl;
								cout << "8将某门课程按成绩从小到大输出成绩（依次输出姓名、学号、成绩）" << endl;
								cout << "9填加学生及相应课程成绩""<<endl;
									cout << "0退出" << endl;
							}*/
