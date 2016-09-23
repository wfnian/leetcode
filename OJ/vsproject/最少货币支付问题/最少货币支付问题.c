/*
题目描述
现行的货币体系为（1、2、5、10、20、50、100），请设计算法，计算要用最少的货币数支付指定金额N，每种货币需要使用的数量。

输入
第一行为测试用例个数n，n≤1000。 后面n行，每行为一个测试用例，每个测试用例为一个大于0的整数目标金额m，0≤m≤10000。

输出
对每个测试用例，输出一行由空格间隔的7个整数，分别表示1元、2元、5元、10元、20元、50元、100元所使用的数量。

样例输入
2
15
189
样例输出
0 0 1 1 0 0 0
0 2 1 1 1 1 1
*/

#include<stdio.h>

int judge(int money, int a, int b, int c, int d, int e, int f, int g ) {
	
		if (money < 2) {
			a = money / 1;
		}
		else if (money < 5) {
			b = money / 2;
			money = money - b * 2;
			judge(money, a, b, c, d, e, f, g); 
		}
		else if (money < 10) {
			c = money / 5;// 15->1
			money = money - c*5;
			judge(money, a, b, c, d, e, f, g); 
		}
		else if (money < 20) {
			d = money / 10;//15->1
			money = money - 10;
			judge(money, a, b, c, d, e, f, g);
		}
		else if (money < 50) {
			e = money / 20;
			money = money - 20 * e;
			judge(money, a, b, c, d, e, f, g); 
		}
		else if (money < 100) {
			f = money / 50;
			money = money - 50;
			judge(money, a, b, c, d, e, f, g); 
		}
		else if (money >= 100) {
			g = money / 100;
			money = money - g * 100;
			judge(money, a, b, c, d, e, f, g);
		}
	//if (money == 0)
		printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
	return 0;
}

int main() {
	int sum;
	int money;
	scanf("%d", &sum);
	for (int i = 0; i < sum; i++) {
		scanf("%d", &money);
		judge(money,0,0,0,0,0,0,0,0);
	}
	
}