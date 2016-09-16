# include <stdio.h>  
int  main(){  
    int x,y,t;  
    int r; 
    int n1,n2;
    printf("请输入两个正整数：\n");  
    scanf("%d %d", &n1, &n2);  
    r = n1 % n2;  
    t = n2;
    while(r!=0)  
    {  
        n1 = n2;  
        n2 = r;  
        r = n1 % n2;  
    }  
printf("它们的最大公约数为：%d\n", n2);  
    printf("它们的最小公倍数为：%d\n", n1*t/n2); 
    return 0;  
} 
