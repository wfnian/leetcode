#include<stdio.h>
enum weekda{
	sun,mon,tue,wed,thu,fri,sat
};
int main(){
	enum weekda s;
	s=sun;
	printf("%d ",s);
}
