#include<stdio.h>
int i;
int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int mainMAX(int s[3][3]);
	int res;
	res=mainMAX(a);
	printf("%d\n",res);
}
int mainMAX(int s[3][3]){
	int m=s[0][0];
	for(i=1;i<3;i++)
	if(s[i][i]>m)
		m=s[i][i];
		return m;
}
