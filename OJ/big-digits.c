#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char *num1 = (char*)malloc(20000), *num2 = (char*)malloc(20000), *sum  = (char*)malloc(20000);
	char *temps = (char*)malloc(20000);
	while (~scanf("%s %s",num1,num2)) {
		long long len1 = strlen(num1), len2 = strlen(num2), len3;
		int i = 0, j;
		if (len1 > len2)
			len3 = len1 + 1;
		else len3 = len2 + 1;
		char temp;
		sum[i] = '0';
		while (1) {
			sum[i + 1] = '0';
			if(len2<=0)
				temp = num1[len1 - 1] + sum[i] - 2 * '0';
			else if(len1<=0)
				temp = num2[len2 - 1] + sum[i] - 2 * '0';
			else temp = num1[len1 - 1] + num2[len2 - 1] + sum[i] - 3 * '0';
			if (temp > 9) {
				sum[i] = temp - 10 + '0';
				sum[i + 1] = '1';
			}
			else {
				sum[i] = temp + '0';
				sum[i + 1] = '0';
			}
			if (len1 <= 0) 
				len2--;
			if (len2 <= 0)
				len1--;
			if (len1 > 0 && len2 > 0)
				len1--, len2--;
			if (len1 <= 0 && len2 <= 0)
				break;
			i++;
		}
		sum[len3 + 1] = '\0';
		if (sum[len3 - 1] == '0') {
			for (j = 0, i = 2; i < len3 + 1; j++, i++)
				temps[j] = sum[len3 - i];
			temps[len3 - 1] = NULL;
		}
		else {
			for (j = 0, i = 1; i < len3 + 1; j++, i++)
				temps[j] = sum[len3 - i];
			temps[len3] = NULL;
		}
		puts(temps);
	}
}
