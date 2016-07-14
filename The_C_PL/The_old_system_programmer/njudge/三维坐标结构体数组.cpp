#include<stdio.h>
struct sw{
	int X;
	int Y;
	int Z;
};
int main(){
	int i,N,M;
	scanf("%d",&N);
	struct sw s[20];
	for(i=0;i<N;i++){
		scanf("%d %d %d",&s[i].X,&s[i].Y,&s[i].Z);
	}
	int maxv=s[0].Z;
	for(i=0;i<N;i++){
		if(s[i].Z>maxv){
			maxv=s[i].Z;
			M=i;
		}
	}
	printf("%d %d %d",s[M].X,s[M].Y,s[M].Z);
}
