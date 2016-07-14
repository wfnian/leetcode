#include<stdio.h> 
int main(){
	char*t="Beijing University of Chemical Technology";
//	t="Beijing University of Chemical Technology";
	
	while(*t!='\0'){
		if(*t>='A'&&*t<='Z');
			putchar(*t);
		t++;
	}
}
