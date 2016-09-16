#include<stdio.h>
int main(){
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,12};
	int m[3];
	int i;
	void row(int s[3][4],int res[3]);
	row(a,m);
	for(i=0;i<3;i++)
	printf("第%d行最大值为%d\n",i+1,m[i]);
}
void row(int s[3][4],int res[3]){
	int i,j;
	for(i=0;i<3;i++){
		res[i]=s[i][0];
		for(j=1;j<4;j++){
		
			if(s[i][j]>res[i]){
				res[i]=s[i][j];
			}
		}
	}
}
