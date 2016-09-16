#include<stdio.h>
struct aa{
	char c[300];
	char m[10];
	int a;
	int b;
	int d;
};
int main(){
	struct aa s[40];
	int i,N;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s %s %d %d %d",&s[i].c,&s[i].m,&s[i].a,&s[i].b,&s[i].d);
	}
	int j,M;
	for(j=1;j<4;j++){
		for(i=0;i<4-j;i++){
			if(s[i].a>s[i+1].a){
				M=s[i].a;
				s[i].a=s[i+1].a;
				s[i+1].a=M;
			}
		}
	}
		for(i=0;i<N;i++){
		printf("%s ",s[i].c);
		printf("\n");
	}
}
