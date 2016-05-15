/*
 * 计算最大公约数
 */

#include<stdio.h>

int main() {
    int a, b, c;

    printf("Please enter two numbers:");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        c = a%b; 
        a = b;
        b = c;
    }
    printf("The greatest common divisor is %d\n", a);

    return 0;
}
