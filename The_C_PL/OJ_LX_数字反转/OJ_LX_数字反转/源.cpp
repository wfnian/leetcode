//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	/*int n, a, b, c;
//	scanf("%d", &n);*/
//	char s[22];
//	int i, m;
//	gets_s(s);
//	m = strlen(s);
//	for (i = m - 1; i >= 0; i--) {
//		printf("%c", s[i]);
//	}
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);//输入要翻转的数字 
	int result = 0;//保存翻转后的结果
	while (1)//while(true)也可以 
	{
		int i = n % 10;//每次都是得到最低位上的数字
		result = result * 10 + i;
		n = n / 10;//递归降位
		if (n == 0)
		{
			break;
		}
	}
	printf("%d\n", result);
}