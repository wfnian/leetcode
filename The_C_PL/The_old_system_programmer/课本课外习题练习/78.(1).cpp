#include<stdio.h>
int main(){
	int a[3][4]={9,18,-24,34,0,17,-76,67,83,48,100,23};
	int max,row,col,i,j;
	row=0,max=a[0][0];
	col=0;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(a[i][j]>max){
				max=a[i][j];
				row=i;
				col=j;
			}
		}
	}
	printf("%d      %d %d",max,row,col);
	
}
