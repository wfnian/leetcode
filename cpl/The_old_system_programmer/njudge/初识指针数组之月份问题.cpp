#include<stdio.h>
int main(){
	char c[11]="Jan";
/*	char c[2]="Feb";
	char c[3]="Mar";
	char c[4]="Apr";
	char c[5]="May";
	char c[6]="Jun";
	char c[7]="Jul";
	char c[8]="Aug";
	char c[9]="Sept";
	char c[10]="Oct";
	char c[11]="Nov";
	char c[12]="Dec";*/
	int i;
	scanf("%d",&i);
	if(i>12&&i<1)
	printf("Error");
	else if(i<=12&&i>=1) 
	printf("%c",c[i]);
	puts(c);
} 
