#include<stdio.h>
int main() {
	float a, b, c;
	char d;
	printf("Please input\nNotice:must like :2+2\n");
	scanf("%f %c %f", &a, &d, &b);
	switch (d)
	{
	case'+': {
		c = a + b;
		printf("%.0f+%.0f=%.0f\n", a, b, c);
		break;
	}
	case'-': {
		c = a - b;
		printf("%.0f-%.0f=%.0f\n", a, b, c);
		break;
	}
	case'*': {
		c = a * b;
		printf("%.0f*%.0f=%.0f\n", a, b, c);
		break;
	}
	case'/': {
		if (b == 0) {
			printf("Error!\n");
			break;
		}
		else c = a / b;
		printf("%.0f/%.0f=%f\n", a, b, c);
		break;
	}
	default:printf("Error!\n");
		break;
	}

	return 0;

}