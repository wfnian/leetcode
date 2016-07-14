#include<stdio.h>
#include<string.h>
struct stu{
	char c[20];
	long num;
	char nam[20];
	char sex;
	float sc;
};
int main(){
	struct stu s_1={"computer001",123456,"Zhao Yan",'m',90.5};
	struct stu*p;
	p=&s_1;
	printf("Class :%s\tnum :%ld\tname :%s\tsex :%c\tscore :%.2f\n",s_1.c,s_1.num,s_1.nam,s_1.sex,s_1.sc);
	printf("Class :%s\tnum :%ld\tname :%s\tsex :%c\tscore :%.2f\n",p->c,p->num,(*p).nam,(*p).sex,(*p).sc);
}
