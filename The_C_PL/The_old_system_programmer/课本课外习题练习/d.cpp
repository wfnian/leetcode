# include <stdio.h>  
int  main(int){  
    int x, y,temp;  
    int r;  
	int num1,num2; 
    printf("请输入两个正整数：\n");  
    scanf("%d %d", &num1, &num2);  
    r = num1 % num2;  
    temp = num2;  
    while(r!=0)  
    {  
        num1 = num2;  
        num2 = r;  
        r = num1 % num2;  
    }  
printf("它们的最大公约数为：%d\n", num2);  
    printf("它们的最小公倍数为：%d\n", num1*temp/num2); 
    return 0;  
} 
