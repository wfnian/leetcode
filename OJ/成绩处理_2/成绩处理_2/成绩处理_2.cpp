#include<iostream>  
#include<string>    
#include<iomanip>  
#define MAXSIZE 30
typedef int Status;

using namespace std;
Status main();
char press; Status choose; Status n, i;

typedef struct student {
	long number;
	string name;
	float Math;
	float CPP;
	float Englist;
	float History;
	float Politics;
	Status sum;
	Status ave;
}Student ;

Student Students[MAXSIZE];

int Check() {
	int a;
	if (Students[3].CPP <= 60) {
		a = 0;
	}
	else if (Students[3].CPP >= 60) {
		a = 1;
	}
	switch (a) {
	case 0: {
		switch (a) {
		case 0: {
			// << "请选择要执行的职能（1-4）" << endl;
			;
		}break;
		case 1: {
			//cout << "请选择要执行的职能（1-4）" << endl;
			;
		}break;
		default: {//cout << "请选择要执行的职能（1-4）" << endl;
			;
		}break;
		}
	}break;
	case 1: {
		//cout << "请选择要执行的职能（1-4）" << endl;
		;

	}break;
	default: {
		//cout << "请选择要执行的职能（1-4）" << endl;
		;
	}break;
	}
	return 0;
}

void input()
{
	cout << "30个学生的成绩:";
	cin >> n; for (Status a = 0; a<n; a++)
	{
		cout << "请输入第" << a + 1 << "个学生资料:" << endl;
		cout << "学号：" << ' '; cin >> Students[a].number;
		cout << "姓名：" << ' '; cin >> Students[a].name;
		cout << "高数：" << ' '; cin >> Students[a].Math;
		cout << "C++:" << ' '; cin >> Students[a].CPP;
		cout << "英语：" << ' '; cin >> Students[a].Englist;
		cout << "历史：" << ' '; cin >> Students[a].History;
		cout << "政治：" << ' '; cin >> Students[a].Politics; cout << "输入成功，按0返回主界面" << endl; cin >> press;
		switch (choose)
		{
		case 0: main(); break; default:Check(); break;
		}
		Check();
	}
}

void XG()
{
begin:string find_name; Status i;
	cout << "请输入你要修改的学生名字:" << endl; cin >> find_name;
	for (i = 0; i<n; i++)
		if (Students[i].name == find_name)
		{
			cout << Students[i].name << " " << "已经找到:" << endl;
			cout << "学生的学号:" << Students[i].number << ' '
				<< "姓名:" << Students[i].name << ' '
				<< "高数成绩:" << Students[i].Math << ' '
				<< "c++成绩:" << Students[i].CPP << ' '
				<< "英语成绩:" << Students[i].Englist << ' '
				<< "历史成绩:" << Students[i].History << ' '
				<< "政治成绩:" << Students[i].Politics << endl; break;
		}
	if (Students[i].name != find_name)
	{
		cout << "找不到这个名字" << endl;
		cout << "请重新查找!" << endl; goto begin;
	}
	Check();
	for (Status j = 0; j<n; j++)
	{
		cout << "请输入新的信息:" << endl;
		cout << "学号：" << ' '; cin >> Students[j].number;
		cout << "姓名：" << ' '; cin >> Students[j].name;
		cout << "高数成绩：" << ' '; cin >> Students[j].Math;
		cout << "c++成绩：" << ' '; cin >> Students[j].CPP;
		cout << "英语成绩：" << ' '; cin >> Students[j].Englist;
		cout << "历史成绩：" << ' '; cin >> Students[j].History;
		cout << "政治成绩：" << ' '; cin >> Students[j].Politics;
		switch (choose)
		{
		case 0: main(); break; default:Check(); break;
		}
	}
}

void SC()

{
	Check();
	do {
		string SC_name;
		cout << "请输入你要删除的学生名字:" << endl; Status i = 0; cin >> SC_name;
		while (Students[i].name != SC_name&&i<n) i++;                            //查找判断
		if (Students[i].name == SC_name)
		{
			for (Status j = i; j<n - 1; j++)
			{
				Students[i].number = Students[i + 1].number;
				Students[i].name = Students[i + 1].name;
				Students[i].Math = Students[i + 1].Math;
				Students[i].CPP = Students[i + 1].CPP;
				Students[i].Englist = Students[i + 1].Englist;
				Students[i].History = Students[i + 1].History;
				Students[i].Politics = Students[i + 1].Politics;
			}
			cout << "删除成功!" << endl; n = n - 1;
		}
		else if (i == n) { cout << "不存在" << endl; cout << "ERROR" << endl; }
		cout << "(是否继续操作？(y/n))" << endl; cin >> press;
	} while (press == 'y' || press == 'Y');
}

void wkcj()
{
	cout << "1.高数" << endl;
	cout << "2.C++" << endl;
	cout << "3.英语" << endl;
	cout << "4.历史" << endl;
	cout << "5.政治" << endl;
	Check();
}

void km()
{
	do {
		Status find_number, c;
		cout << "请输入你要查询的学号:" << ' ';
		cin >> find_number; Status i;
		for (i = 0; i<n; i++)
			if (Students[i].number == find_number)
				cout << "请输入数字来选择课程" << endl;
		wkcj();
		cin >> c;
		switch (c)
		{
		case 1:cout << Students[i].name << '	' << Students[i].Math << endl;
		case 2:cout << Students[i].name << '	' << Students[i].CPP << endl;
		case 3:cout << Students[i].name << '	' << Students[i].Englist << endl;
		case 4:cout << Students[i].name << '	' << Students[i].History << endl;
		case 5:cout << Students[i].name << '	' << Students[i].Politics << endl;
		default:cout << "请重新输入" << endl;
		}
		if (Students[i].number != find_number)
			cout << "无法找到该学号" << endl;
		cout << "(是否继续操作？(y/n))" << endl; cin >> press;
	} while (press == 'y' || press == 'Y');
	Check();
}

void ave()
{
	do {
		Status find_number;
		cout << "请输入你要查询的学号:" << ' ';
		cin >> find_number; Status i;
		for (i = 0; i<n; i++)
			if (Students[i].number == find_number)
			{
				cout << "学号为" << Students[i].number << "的学生的资料已找到:" << endl;
				cout << Students[i].name << "的平均成绩为" << (Students[i].Math + Students[i].CPP + Students[i].Englist + Students[i].History + Students[i].Politics) / 5 << endl; break;
			}
		if (Students[i].number != find_number)
			cout << "can't find this xm" << endl;
		cout << "(是否继续操作？(y/n))" << endl; cin >> press;
	} while (press == 'y' || press == 'Y');
	Check();
}

void rate()
{
	Status i, s = 0, c;
	cout << "请数字选择课程" << endl;
	wkcj();
	cin >> c;
	Check();
	switch (c)
	{
	case 1: {for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Math >= 60)	s = s + 1; if (i>MAXSIZE) s = s / MAXSIZE; }}
	case 2: {for (i = 1; i <= MAXSIZE; i++) { if (Students[i].CPP >= 60)	s = s + 1; if (i>MAXSIZE) s = s / MAXSIZE; }}
	case 3: {for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Englist >= 60)	s = s + 1; if (i>MAXSIZE) s = s / MAXSIZE; }}
	case 4: {for (i = 1; i <= MAXSIZE; i++) { if (Students[i].History >= 60)	s = s + 1; if (i>MAXSIZE) s = s / MAXSIZE; }}
	case 5: {for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Politics >= 60)	s = s + 1; if (i>MAXSIZE) s = s / MAXSIZE; }}
	}
	cout << "该门课程及格率为" << s << endl;
	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
	Check();
}

void pj()
{
	Status i, c, s = 0;
	cout << "请输入数字选择课程" << endl;
	wkcj();
	cin >> c;
	switch (c)
	{
	case 1: {
		for (i = 1; i <= MAXSIZE; i++)
			s = s + Students[i].Math;
		if (i>MAXSIZE) s = s / MAXSIZE; 
	}
			cout << "高数平均成绩" << s << endl; break;
	case 2: {for (i = 1; i <= MAXSIZE; i++) s = s + Students[i].CPP; if (i>MAXSIZE) s = s / MAXSIZE; }; cout << "C++平均成绩" << s << endl; break;
	case 3: {for (i = 1; i <= MAXSIZE; i++) s = s + Students[i].Englist; if (i>MAXSIZE)	s = s / MAXSIZE; }; cout << "英语平均成绩" << s << endl; break;
	case 4: {for (i = 1; i <= MAXSIZE; i++) s = s + Students[i].History; if (i>MAXSIZE)	s = (s / MAXSIZE); }; cout << "历史平均成绩" << s << endl; break;
	case 5: {for (i = 1; i <= MAXSIZE; i++) s = s + Students[i].Politics; if (i>MAXSIZE)	s = (s / MAXSIZE); }; cout << "政治平均成绩" << s << endl; break;
	}
	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
	Check();
}

void min()
{
	Status i, m, c;
	cout << "请输入要选择的课程" << endl;
	wkcj();
	cin >> c;
	switch (c)
	{
	case 1: {m = Students[0].Math; for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Math<Students[0].Math)	m = Students[i].Math; }cout << "姓名" << Students[i].name << "最小值为" << m; }; break;
	case 2: {m = Students[0].CPP; for (i = 1; i <= MAXSIZE; i++) { if (Students[i].CPP<Students[0].CPP)	m = Students[i].CPP; }cout << "姓名" << Students[i].name << "最小值为" << m; }; break;
	case 3: {m = Students[0].Englist; for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Englist<Students[0].Englist)	m = Students[i].Englist; }cout << "姓名" << Students[i].name << "最小值为" << m; }; break;
	case 4: {m = Students[0].History; for (i = 1; i <= MAXSIZE; i++) { if (Students[i].History<Students[0].History)	m = Students[i].History; }cout << "姓名" << Students[i].name << "最小值为" << m; }; break;
	case 5: {m = Students[0].Politics; for (i = 1; i <= MAXSIZE; i++) { if (Students[i].Politics<Students[0].Politics)	m = Students[i].Politics; }cout << "姓名" << Students[i].name << "最小值为" << m; }; break;
	}
	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
	Check();
}

void max()
{
	Status i, m, c;
	cout << "请键入数字一选择课程" << endl;
	wkcj();
	cin >> c;
	Check();
	switch (c)
	{
	case 1: {
		m = Students[0].Math;
		for (i = 1; i <= MAXSIZE; i++) { 
			if (Students[i].Math>Students[0].Math)
				m = Students[i].Math;
		}
		cout << "姓名" << Students[i].name << "最大值为" << m; 
	}; break;
	case 2: {
		m = Students[0].CPP;
		for (i = 1; i <= MAXSIZE; i++) {
			if (Students[i].CPP>Students[0].CPP)	
				m = Students[i].CPP;
		}
		cout << "姓名" << Students[i].name << "最大值为" << m;
	}; break;
	case 3: {
		m = Students[0].Englist;
		for (i = 1; i <= MAXSIZE; i++) {
			if (Students[i].Englist>Students[0].Englist)	
				m = Students[i].Englist;
		}
		cout << "姓名" << Students[i].name << "最大值为" << m;
	}; break;
	case 4: {
		m = Students[0].History; 
		for (i = 1; i <= MAXSIZE; i++) {
			if (Students[i].History>Students[0].History)	
				m = Students[i].History;
		}
		cout << "姓名" << Students[i].name << "最大值为" << m;
	}; break;
	case 5: {
		m = Students[0].Politics; 
		for (i = 1; i <= MAXSIZE; i++) { 
			if (Students[i].Politics>Students[0].Politics)	
				m = Students[i].Politics; 
		}
		cout << "姓名" << Students[i].name << "最大值为" << m;
	}; break;
	}
	cout << "ENTER  0 BACK" << endl;
	Check();
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
}
void ags()
{
	Check();
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].number>Students[i + 1].number)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name; 
				Students[i + 1].name = na;
				e = Students[i].Math;
				Students[i].Math = Students[i + 1].Math;
				Students[i + 1].Math = e;
			}
	cout << "学生按学号排名:" << endl;
	cout << "学号" << ' ' << "姓名" << ' ' << "高数分数" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Math << endl; cout << endl;
	}
	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
}
void bcjj()
{
	Status e, g; string na;
	Check();
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].number>Students[i + 1].number)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].CPP;
				Students[i].CPP = Students[i + 1].CPP;
				Students[i + 1].CPP = e;
			}cout << "学生按C++分数排名:" << endl;
	cout << "学号" << ' ' << "姓名" << ' ' << "C++分数" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].CPP << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	Check();
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
}
void cyy()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].number>Students[i + 1].number)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].Englist;
				Students[i].Englist = Students[i + 1].Englist;
				Students[i + 1].Englist = e;
			}cout << "学生按英语分数排名:" << endl;
	cout << "学号" << ' ' << "姓名" << ' ' << "英语分数" << endl;
	Check();
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Englist << endl;
		cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break; default:Check(); break;
	}
}
void dls()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].number>Students[i + 1].number)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].History;   Students[i].History = Students[i + 1].History;
				Students[i + 1].History = e;
			}cout << "学生按历史分数排名:" << endl;
	cout << "学号" << ' ' << "姓名" << ' ' << "历史分数" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].History << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	default:Check(); break;
	}
}
void ezz()
{
	Check();
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].number>Students[i + 1].number)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].Politics;
				Students[i].Englist = Students[i + 1].Politics;
				Students[i + 1].Politics = e;
			}cout << "学生按政治分数排名:" << endl;
	cout << "学号" << ' ' << "姓名" << ' ' << "政治分数" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Politics << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	default:Check(); break;
	}
}

void zt()
{
	Status c;
	cout << "按学号排名成绩" << endl;
	cout << "请键入数字一选择课程" << endl;
	wkcj();
	cin >> c;
	Check();
	switch (c)
	{
	case 1:ags(); break;
	case 2:bcjj(); break;
	case 3:cyy(); break;
	case 4:dls(); break;
	case 5:ezz(); break;
	case 0: main(); break;
	default:cout << "\t\t\t        ERROR BACK" << endl; break;
	}
}
void Math()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].Math>Students[i + 1].Math)
			{
				g = Students[i].number;      Students[i].number = Students[i + 1].number;            Students[i + 1].number = g;
				na = Students[i].name;    Students[i].name = Students[i + 1].name;          Students[i + 1].name = na;
				e = Students[i].Math;   Students[i].Math = Students[i + 1].Math;       Students[i + 1].Math = e;
			}
	cout << "学生按高数分数排名:" << endl;
	cout << "学号" << ' ' << "姓名" << ' ' << "高数分数" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Math << endl; cout << endl;
	}
	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	default:Check(); break;
	}
	Check();
}
void CPP()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].CPP>Students[i + 1].CPP)
			{
				g = Students[i].number;      Students[i].number = Students[i + 1].number;            Students[i + 1].number = g;
				na = Students[i].name;    Students[i].name = Students[i + 1].name;          Students[i + 1].name = na;
				e = Students[i].CPP;   Students[i].CPP = Students[i + 1].CPP;       Students[i + 1].CPP = e;
			}cout << "学生按C++分数排名:" << endl;
	cout << "学号" << ' ' << "姓名" << ' ' << "C++分数" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].CPP << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	default:Check(); break;
	}
}
void Englist()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].Englist>Students[i + 1].Englist)
			{
				g = Students[i].number; 
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].Englist;
				Students[i].Englist = Students[i + 1].Englist;
				Students[i + 1].Englist = e;
			}cout << "学生按英语分数排名:" << endl;
	cout << "学号" << ' ' << "姓名" << ' ' << "英语分数" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Englist << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	default:Check(); break;
	}
}
void History()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].History>Students[i + 1].History)
			{
				g = Students[i].number;    
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name;
				Students[i].name = Students[i + 1].name;
				Students[i + 1].name = na;
				e = Students[i].History;
				Students[i].History = Students[i + 1].History;
				Students[i + 1].History = e;
				Check();
			}cout << "学生按历史分数排名:" << endl;
	cout << "学号" << ' ' << "姓名" << ' ' << "历史分数" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].History << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	}
}

void Politics()
{
	Status e, g; string na;
	for (Status j = 0; j<n - 1; j++)
		for (Status i = 0; i<n - 1 - j; i++)
			if (Students[i].Politics>Students[i + 1].Politics)
			{
				g = Students[i].number;
				Students[i].number = Students[i + 1].number;
				Students[i + 1].number = g;
				na = Students[i].name; 
				Students[i].name = Students[i + 1].name; 
				Students[i + 1].name = na;
				e = Students[i].Politics; 
				Students[i].Englist = Students[i + 1].Politics; 
				Students[i + 1].Politics = e;
			}cout << "学生按政治分数排名:" << endl;
	cout << "学号" << ' ' << "姓名" << ' ' << "政治分数" << endl;
	for (Status i = 0; i<n; i++)
	{
		cout << Students[i].number << "    "
			<< Students[i].name << "    "
			<< Students[i].Politics << endl; cout << endl;
	}	cout << "ENTER  0 BACK" << endl;
	switch (choose)
	{
	case 0: main(); break;
	}
	Check();
}

void zj()
{
	Status c;
	cout << "按成绩排名主界面" << endl;
	cout << "请键入数字一选择课程" << endl;
	wkcj();
	cin >> c;
	Check();
	switch (c)
	{
	case 1:Math(); break;
	case 2:CPP(); break;
	case 3:Englist(); break;
	case 4:History(); break;
	case 5:Politics(); break;
	case 0: main(); break;
	default:cout << "\t\t\t        ERROR,back" << endl; break;
	}
}

void Search()
{
	while (choose != 0) {
		cout << "---------------------------------------------------" << endl;
		cout << "1.查询某学生某门课成绩（输入学号，输出成绩）" << endl;
		cout << "2.查询某学生平均成绩（输入学号，输出成绩）" << endl;
		cout << "0.返回" << endl;
		cout << "---------------------------------------------------" << endl;
		cout << "输入要进行操作的编号" << endl;
		cin >> choose;
		Check();
		switch (choose)
		{
		case 1:km(); break;
		case 2:ave(); break;
		case 0: main(); break;
		default:cout << "\t\t        ERROR,back" << '\n'; break;
		}
	}
}
//Check();


void akc()
{
	while (choose != 0) {
		cout << "-----------------------------------------------------" << endl;
		cout << "1.某门课平均成绩（输入课程，输出平均成绩" << endl;
		cout << "2.某门课及格率（输入课程，输出及格率）" << endl;
		cout << "3.某门课程最小成绩（输入课程，输出姓名、最小成绩）" << endl;
		cout << "4.某门课程最大成绩（输入课程，输出姓名、最大成绩）" << endl;
		cout << "0.返回" << endl;
		cout << "         输入0-4之间的任意一数字    :" << endl;
		cout << "-----------------------------------------------------" << endl;
		cin >> choose;
		Check();
		switch (choose)
		{
		case 1: {pj(); Check();  } break;
		case 2: {rate(); Check(); } break;
		case 3: {min(); Check(); } break;
		case 4: {max(); Check(); } break;
		case 0: {main(); Check(); } break;
		default:cout << "\t\t        ERROR,back" << '\n'; break;
		}
	}
}

Status main()
{
	while (choose != 0); {

	//	cout << "请选择要执行的职能（1-4）" << endl;
		cout << "``````````````````````````````````````````````````" << endl;
		cout << "1.	按学生查询" << endl;
		cout << "1．1	查询某学生某门课成绩（输入学号，输出成绩）" << endl;
		cout << "1．2	查询某学生平均成绩（输入学号，输出成绩）" << endl;
		cout << "*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^* ^*^*^*^*^*^*^*^" << endl;

		cout << "2．按课程查询" << endl;
		cout << "2．1 查询某门课平均成绩（输入课程，输出平均成绩）" << endl;
		cout << "2．2 查询某门课及格率（输入课程，输出及格率）" << endl;
		cout << "2．3 查询某门课程最小成绩（输入课程，输出姓名、最小成绩" << endl;
		cout << "2．4 查询某门课程最大成绩（输入课程，输出姓名、最大成绩）" << endl;
		cout << "2．5 将某门课程按学号从小到大输出成绩（依次输出姓名、学号、成绩）" << endl;
		cout << "2．6 将某门课程按成绩从小到大输出成绩（依次输出姓名、学号、成绩）" << endl;
		cout << "*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*^^*" << endl;

		cout << "3. 添加学生及相应课程成绩" << endl;
		cout << "!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^!!!^^^" << endl;

		cout << "4. 删除学生及相应课程成绩" << endl;

		cout << "~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~" << endl;
		cout << "~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~" << endl;
		cout << "~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~~^^~\n\n\n" << endl;

		cout << "**---------------------------------------------------**" << endl;
		cout << "=====1.输入30个学生的成绩               =====" << endl;
		cout << "=====2.学生成绩查询                     =====" << endl;
		cout << "=====3.课程成绩查询                     =====" << endl;
		cout << "=====4.填加学生及相应课程成绩           =====" << endl;
		cout << "=====5.删除学生及相应课程成绩           =====" << endl;
		cout << "=====6.将某门课程按学号从小到大输出成绩 =====" << endl;
		cout << "=====7.将某门课程按成绩从小到大输出成绩 =====" << endl;
		cout << "0.返回" << endl;
		cout << "=====    请输入0-7之间的任意一数字     =====" << endl;
		cout << "**---------------------------------------------------***" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1: {
			input();
			Check();
		}; break;
		case 2: {
			Search();
			Check();
		} break;
		case 3: {
			Check();
			akc();
		}; break;
		case 4: { 
			SC();
			Check(); 
		}; break;
		case 5: {
			XG();
			Check();
		} break;
		case 6: {
			zt(); 
			Check(); 
		} break;
		case 0: {
			Check(); 
			exit(0);
		} break;
		case 7: {
			zj();
			Check();
		} break;
		default:cout << "\t\t\t        ERROR,back" << endl; break;
		}
	}

	return 0;
}