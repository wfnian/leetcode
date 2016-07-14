#include<stdio.h>include<stdlib.h>
int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int mainmax(int s[3][3]);
	int res;
	res=mainmax(a);
	printf("主对角元素最大值为%d\n",res);

}
	int mainmax(int s[3][3]){
		int i;
		int m=s[0][0];
		for(i=1;i<3;i++)
		if(s[i][i]>m)
		m=s[i][i];
		return m;
	}
