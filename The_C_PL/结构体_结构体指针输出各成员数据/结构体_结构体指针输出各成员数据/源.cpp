#include<string.h>
#include<stdio.h>
typedef struct {
	char cls[20];
	long num;
	char name[20];
	char sex;
	float score;
}in;
int main() {
	in student_1;
	in *p;
	p = &student_1;
	strcpy(student_1.cls, "computer001");
	student_1.num = 840010;
	strcpy(student_1.name, "Zhao Yan");
	student_1.sex = 'F';
	student_1.score = 82.5;
	printf("%s %i %s %c %.2f\n", student_1.cls, student_1.num, student_1.name, student_1.sex, student_1.score);
	printf("%s %i %s %c %.2f\n", (*p).cls, (*p).num, (*p).name, (*p).sex, (*p).score);
	printf("%s %i %s %c %.2f\n", p->cls, p->num, p->name, p->sex, p->score);

	return 0;

}