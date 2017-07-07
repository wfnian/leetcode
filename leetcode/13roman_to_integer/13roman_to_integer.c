#include<stdio.h>//WRONG!!!->see my python solution
#include<string.h>//WRONG!!!->see my python solution
/*
'M': 1000,'D': 500 ,'C': 100,'L': 50,'X': 10,'V': 5,'I': 1
"DCXXI"
621
*///WRONG!!!->see my python solution
int romanToInt(char* s) {//WRONG!!!->see my python solution
	int integer = 0;//WRONG!!!->see my python solution
	for (size_t i = 0; s[i] != NULL; i++) {//WRONG!!!->see my python solution
		if (s[i] == 'M')//WRONG!!!->see my python solution
			integer += 1000;//WRONG!!!->see my python solution
		else if (s[i] == 'D')//WRONG!!!->see my python solution
			integer += 500;//WRONG!!!->see my python solution
		else if (s[i] == 'C')//WRONG!!!->see my python solution
			integer += 100;//WRONG!!!->see my python solution
		else if (s[i] == 'L')//WRONG!!!->see my python solution
			integer += 50;//WRONG!!!->see my python solution
		else if (s[i] == 'X')//WRONG!!!->see my python solution
			integer += 10;//WRONG!!!->see my python solution
		else if (s[i] == 'V')//WRONG!!!->see my python solution
			integer += 5;//WRONG!!!->see my python solution
		else integer += 1;//WRONG!!!->see my python solution
	}//WRONG!!!->see my python solution
	return integer;//WRONG!!!->see my python solution
}//WRONG!!!->see my python solution

int main(void) {//WRONG!!!->see my python solution
	printf("%d\n", romanToInt("DCXXI"));//WRONG!!!->see my python solution
	printf("%d\n", romanToInt("MCMXCVI"));//WRONG!!!->see my python solution

	return 0;//WRONG!!!->see my python solution

}//WRONG!!!->see my python solution