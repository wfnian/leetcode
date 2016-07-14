#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12},i,j;
	int m[3];
	int row(int s[3][4],int res[3]);
	row(a,m);
	for(i=0;i<3;i++)
	printf("%dÐÐ   %d ",i+1,m[i]);
} 
int row(int s[3][4],int res[3]){
	int i,j;
	for(i=0;i<3;i++){
		res[i]=s[i][0];
		for(j=1;j<4;j++)
		if(s[i][j]>res[i])
		res[i]=s[i][j];
	}
}
