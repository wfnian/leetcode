#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int m[3];
	int i;
	void rowmax(int s[3][4],int res[3]);
	rowmax(a,m);
	for(i=0;i<3;i++)
		printf("第 %d 行的最大值是 %d \n",i + 1,m[i]);
}
int rowmax(int s[3][4],int res[3]){
	int i,j;
	for(i=0;i<3;i++){
			res[i] = s[i][0];
		for(j=1;j < 4;j++)
			if(s[i][j] > res[i])
		res[i] = s[i][j];
	}
}
