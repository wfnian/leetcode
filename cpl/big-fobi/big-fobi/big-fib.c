#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char num[], char temp[]) {
	char t1[100000];
	int i = 0, len1 = 0, len2 = 0;
	for (i = 0; num[i] != '\0'; i++) {
		t1[i] = num[i];
		len1++;
	}
	t1[len1] = NULL;
	for (i = 0; temp[i] != '\0'; i++) {
		num[i] = temp[i];
		len2++;
	}
	num[len2] = NULL;
	for (i = 0; i<len1; i++) {
		temp[i] = t1[i];
	}
	temp[len1] = NULL;
}
int main() {
	int n,M,j;
	while (scanf("%d", &n) != EOF) {
		if (n == 0)
			break;
		if (n > 40000)
			break;
	char temp,num1[30000] = "1", num2[30000] ="1", *sum = (char*)malloc(30000), temp1[30000], temp2[30000], temp3[30000], *temps = (char*)malloc(30000);
		for (M = 2; M < n+2; M++) {
			int  i = 0, len1 = 0, len2 = 0, len3;
			for (j = 0; num1[j] != '\0'; j++) 
				len1++;
			for (j = 0; num2[j] != '\0'; j++) 
				len2++;
			if (len1 > len2)
				len3 = len1 + 1;
			else len3 = len2 + 1;
			sum[i] = '0';
			while (1) {
				sum[i + 1] = '0';
				if (len2 <= 0)
					temp = num1[len1 - 1] + sum[i] - 2 * '0';
				else if (len1 <= 0)
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
				else if (len2 <= 0)
					len1--;
				else len1--, len2--;
				if (len1 <= 0 && len2 <= 0)
					break;
				i++;
			}
			sum[len3 + 1] = '\0';
			if (sum[len3 - 1] == '0') {
				for (j = 0, i = 2; i < len3 + 1; j++, i++)
					temps[j] = sum[len3 - i];
				temps[len3 - 1] = '\0';
			}
			else {
				for (j = 0, i = 1; i < len3 + 1; j++, i++)
					temps[j] = sum[len3 - i];
				temps[len3] = '\0';
			}
			//temps = num1 + num2;
			strcpy(temp1, num1);
			strcpy(num1, num2);//num1 = num2;
			strcpy(num2, temp1);
			//swap(num1, num2);
			strcpy(temp2, num2);
			strcpy(num2, temps);//num2 = temps;
			strcpy(temps, temp2);
			//swap(num2, temps);
		}
		puts(temps);
	}
	return 0;
}