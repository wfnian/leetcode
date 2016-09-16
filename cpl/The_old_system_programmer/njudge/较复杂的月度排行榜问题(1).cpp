#include<stdio.h>
struct ydph{
	char a[36];
	char b[16];
	int c;
	int d;
	int e;
};
int main(){
	struct ydph s[36];
	int n,i,j,M,N,mn;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %s %d %d %d",&s[i].a,&s[i].b,&s[i].c,&s[i].d,&s[i].e);
	}
	for(j=1;j<n;j++){
		for(i=0;i<n-j;i++){
			if(s[i].c>s[i+1].c){
				N=s[i].c;
				s[i].c=s[i+1].c;
				s[i+1].c=N;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s %s %d %d %d\n",&s[i].a,&s[i].b,&s[i].c,&s[i].d,&s[i].e);
	}
}
