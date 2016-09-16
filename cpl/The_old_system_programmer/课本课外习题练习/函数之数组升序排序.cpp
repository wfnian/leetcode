#include<stdio.h>
int main(){
	int a[369],n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	void fun(int s[36],int k);
	fun(a,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
} 
void fun(int s[36],int k){
	int i,j,t;
	for(j=1;j<k;j++){
		for(i=0;i<k-j;i++){
			if(s[i]>s[i+1]){
				t=s[i];
				s[i]=s[i+1];
				s[i+1]=t;
			}
		}
	}
}
