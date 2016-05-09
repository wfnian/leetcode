#include<stdio.h>
typedef struct student {
	char cls[20];
	long num;
	char name[20];
	char sex;
	float score;
}in;
int main() {
	int i;
	in s[4] = {
		{ "computer001",50141,"wang dong",'F',88 },
		{ "computer001",50142,"li     li",'M',78 },
		{ "computer001",50143,"wang qiang",'F',96 },
		{ "computer001",50144,"zhao neng",'F',86 },
	};
	for (i = 0; i < 4; i++) {
		printf("%s\t%ld\t%6s\t\t%c\t%.2f\n", s[i].cls, s[i].num, s[i].name, s[i].sex, s[i].score);
	}

}