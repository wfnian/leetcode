#include<stdio.h>
#include<stdlib.h>
int main(){
    float C,F=-40;
    do{
    	C=5/9.0*(F-32);
    	F=F+10;
    	printf("%-3.1f %-3.1f\n",F-10,C);
	}while(F<=110);
	system("pause");
	return 0;
}
