#include<stdio.h>
 struct  ss{
	int year;
	char moth[99];
	int day;
};
 struct sn{
	char name[20];
	char clas[20];
	int numb;
	char sex;
	ss bir;
};
int main() {
	struct sn s = { "wang li","computer001",20150,'w',1997,"ee",28 };
	printf("%s\t%s\t%d\t%c\t%d\t%s\t%2d\n", s.name, s.clas, s.numb, s.sex, s.bir.year, s.bir.moth, s.bir.day);
}