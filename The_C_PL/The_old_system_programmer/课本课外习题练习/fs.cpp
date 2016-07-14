#include<stdio.h>
struct stu{
	int num;
	char n[30];
	float score;
};
int main(){ 
	struct stu s[3]={1,"zhang",100,2,"dfsa",33,3,"fsfkj",49.8};
	int i;
	for(i=0;i<3;i++){
	printf("%-d\t%-s\t %-.2f\t \n",s[i].num,s[i].n,s[i].score);
}



}
