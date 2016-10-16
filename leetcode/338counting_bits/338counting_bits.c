/*338. Counting Bits  QuestionEditorial Solution  My Submissions
It is very easy to come up with a solution with run time
O(n * sizeof(integer)).But can you do it in linear time O(n) / possibly
in a single pass ?
Space complexity should be O(n).
Can you do it like a boss ? Do it without using any builtin
function like __builtin_popcount in c++ or in any other language.*/
#include<stdio.h> 
#include<stdlib.h> 

int main()
{
	int num, result;
	scanf("%d", &num);
	char *str, *str1;
	for (int i = 0; i < num + 6; i++) {
		*str1 = itoa(num, str, 2);
		//printf("%d\n", result);
		puts(str1);
		num--;
	}
	return 0;
}